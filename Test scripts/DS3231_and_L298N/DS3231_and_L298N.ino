#include <RTClib.h>
// #include <Wire.h>

RTC_DS3231 rtc;

// the pin that is connected to SQW
#define CLOCK_INTERRUPT_PIN 2
#define nextAlarmDelay 10


// *************************************************************
// L298N setup
#define IN1 7 // D7
#define IN2 8 // D8
#define ENA 6 // D6

// microswitch setup
#define microswitchPin 12 // D12
#define motorDelay 300
// active low


void setup() {
  Serial.begin(9600);

  // initializing the rtc
  if(!rtc.begin()) {
    Serial.println("Couldn't find RTC!");
    Serial.flush();
    abort();
  }
  
  if(rtc.lostPower()) {
    // this will adjust to the date and time at compilation
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }
  
  //we don't need the 32K Pin, so disable it
  rtc.disable32K();
  
  // Making it so, that the alarm will trigger an interrupt
  pinMode(CLOCK_INTERRUPT_PIN, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(CLOCK_INTERRUPT_PIN), onAlarm, FALLING);
  
  // set alarm 1, 2 flag to false (so alarm 1, 2 didn't happen so far)
  // if not done, this easily leads to problems, as both register aren't reset on reboot/recompile
  rtc.clearAlarm(1);
  rtc.clearAlarm(2);
  
  // stop oscillating signals at SQW Pin
  // otherwise setAlarm1 will fail
  rtc.writeSqwPinMode(DS3231_OFF);
  
  // turn off alarm 2 (in case it isn't off already)
  // again, this isn't done at reboot, so a previously set alarm could easily go overlooked
  rtc.disableAlarm(1);
  
  // schedule an alarm 10 seconds in the future
  if(!rtc.setAlarm2(
        returnSecondsAlarm,
        DS3231_A2_PerMinute // this mode triggers the alarm when the seconds match. See Doxygen for other options
  )) {
    Serial.println("Error, alarm wasn't set!");
  }else {
    Serial.println("Alarm will happen in 10 seconds!");  
  }







  // declare pins for L298N
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);

  digitalWrite(ENA, LOW);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  // declare pins for microswitch
  pinMode(microswitchPin, INPUT_PULLUP); // will go low when triggered (active low)
}

void loop() {
  // print current time
  char date[10] = "hh:mm:ss";
  rtc.now().toString(date);
  Serial.println(date);
    
  Serial.print(" SQW: "); // the value at SQW-Pin (because of pullup 1 means no alarm)
  Serial.println(digitalRead(CLOCK_INTERRUPT_PIN));
  
  // whether a alarm happened happened
  Serial.print(" Alarm1: ");
  Serial.println(rtc.alarmFired(2));
  // Serial.print(" Alarm2: ");
  // Serial.println(rtc.alarmFired(2));
  // control register values (see https://datasheets.maximintegrated.com/en/ds/DS3231.pdf page 13)
  // Serial.print(" Control: 0b");
  // Serial.println(read_i2c_register(DS3231_ADDRESS, DS3231_CONTROL), BIN);
  
  // resetting SQW and alarm 1 flag
  // using setAlarm1, the next alarm could now be configurated
  if(rtc.alarmFired(2)) {
    rtc.clearAlarm(2);
    Serial.println("Alarm cleared");
    setNextAlarm();
    flipMinute();
  }
    
    delay(2000);
}


/******************************************************************
*******************************************************************
*******************************************************************
*******************************************************************
******************************************************************/


void onAlarm() {
  unsigned long start = micros(); // begin counting how long this ISR takes
  Serial.println("Alarm occured!");

    
  // calculating and printing ISR execution time
  unsigned long end = micros();
  unsigned long delta = end - start;
  Serial.println("took " + String(delta) + " microseconds to execute ISR");
}

void flipMinute() {
  // While switch isn't triggered, make the motor spin
  // Once it is triggered, stop the motor after a delay of motorDelay milliseconds
  
  while(digitalRead(microswitchPin) == HIGH) {
    digitalWrite(ENA, HIGH);
  }
  while(digitalRead(microswitchPin) == LOW) {
    digitalWrite(ENA, HIGH);
  }
  
  delay(motorDelay); //keep spinning for a little after microswitch is inactive (high) again
  digitalWrite(ENA, LOW);
  Serial.println("flipped minute");
}


void setNextAlarm() {
  if(!rtc.setAlarm1(
    rtc.now() + TimeSpan(nextAlarmDelay),
    DS3231_A1_Second // this mode triggers the alarm when the seconds match. See Doxygen for other options
    )) {
      Serial.println("Error, alarm wasn't set!");
    }else {
      Serial.println("Alarm will happen next time minute changes!");  
    }
  Serial.println("set new alarm");
}



DateTime returnSecondsAlarm() {
  DateTime now = rtc.now();

  DateTime output(
    now.year(),
    now.month(),
    now.day(),
    now.hour(),
    now.minute(),
    00
   );
}
