// RTC setup
#include <RTClib.h>
#define CLOCK_INTERRUPT_PIN 2 // the pin that is connected to SQW

RTC_DS3231 rtc;
char daysOfTheWeek[7][12] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};


// *************************************************************
// L298N setup
#define IN1 7 // D7
#define IN2 8 // D8
#define ENA 6 // D6

// microswitch setup
#define microswitchPin 12 // D12
#define motorDelay 80
// active low

void setup() {
  Serial.begin(9600);
  
  // Initialise RTC and clear prev. settings
  rtc.begin();
  rtc.disable32K();
  rtc.clearAlarm(1);
  rtc.clearAlarm(2);
  // rtc.writeSqwPinMode(DS3231_OFF);
  rtc.writeSqwPinMode(DS3231_OFF); // stop oscillating signals at SQW Pin
  // otherwise setAlarm1 will fail
  rtc.disableAlarm(2);
  

  // attach interrupt to SQW pin
  pinMode(CLOCK_INTERRUPT_PIN, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(CLOCK_INTERRUPT_PIN), onAlarm, FALLING);
  // SQW pin is active-low, meaning a 1 is defined as off and a 0 as on, hence the pullup resistor

  
  if(!rtc.setAlarm1(
    rtc.now() + TimeSpan(10),
    DS3231_A1_Second // this mode triggers the alarm when the seconds match. See Doxygen for other options
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
    
  printCurrentTime();
}


// Brainstorming ***(IGNORE THIS)***
// Have motor rotation code execute after delay(1000)

// Use alarm(2) on DS3231 to trigger the SQW pin with an interrupt and cause the motor to spin exactly each minute until a little after it triggers the microswitch
  // may create issues when you want the ACTUAL alarm to go off??
  // I think we can differentiate between alarms though, so should be ok



void loop() {

  Serial.print(" SQW: ");
  Serial.println(digitalRead(CLOCK_INTERRUPT_PIN));

  Serial.print(" Alarm1: ");
  Serial.println(rtc.alarmFired(1));

  if(rtc.alarmFired(1)) {
    Serial.println("Alarm(1) detected in main loop");
    rtc.clearAlarm(1);
    Serial.println("Alarm cleared");
  }

  Serial.println("*********************");



  delay(2000);
}


/******************************************************************
*******************************************************************
*******************************************************************
******************************************************************/


void onAlarm() {
  unsigned long start = micros(); // begin counting how long this ISR takes
  
  Serial.println("Alarm occured!");
  
  setNextAlarm();

  flipMinute();

  // calculating and printing ISR execution time
  unsigned long end = micros();
  unsigned long delta = end - start;
  Serial.println("took " + String(delta) + " microseconds to execute ISR");
}


void setNextAlarm() {
  rtc.setAlarm1( // set alarm for 60 seconds in the future
    rtc.now() + TimeSpan(60),
    DS3231_A1_Second // this mode triggers the alarm when the seconds match. See Doxygen for other options
  );
  Serial.println("set new alarm");
}

void flipMinute() {
  // While switch isn't triggered, make the motor spin
  // Once it is triggered, stop the motor after a delay of motorDelay milliseconds
  
  while(digitalRead(microswitchPin) == HIGH) {
    digitalWrite(ENA, HIGH);
  }
  delay(motorDelay);
  digitalWrite(ENA, LOW);
  Serial.println("flipped minute");
}



void printCurrentTime() {
  DateTime now = rtc.now();

  Serial.print(now.year(), DEC);
  Serial.print('/');
  Serial.print(now.month(), DEC);
  Serial.print('/');
  Serial.print(now.day(), DEC);
  Serial.print(" (");
  Serial.print(daysOfTheWeek[now.dayOfTheWeek()]);
  Serial.print(") ");
  Serial.print(now.hour(), DEC);
  Serial.print(':');
  Serial.print(now.minute(), DEC);
  Serial.print(':');
  Serial.print(now.second(), DEC);
  Serial.println();

  Serial.print(" since midnight 1/1/1970 = ");
  Serial.print(now.unixtime());
  Serial.print("s = ");
  Serial.print(now.unixtime() / 86400L);
  Serial.println("d");
}
