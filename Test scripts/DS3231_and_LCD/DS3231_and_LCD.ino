
// RTC
#include <RTClib.h>
RTC_DS3231 rtc;
#define CLOCK_INTERRUPT_PIN 2 // the pin that is connected to SQW
#define nextAlarmDelay 10
char daysOfTheWeek[7][12] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};


// LCD
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4); // set the LCD address to 0x27 for a 16 chars and 2 line display


// L298N setup
#define IN1 7 // D7
#define IN2 8 // D8
#define ENA 6 // D6

// microswitch setup
#define microswitchPin 12 // D12
#define motorDelay 300 // active low


void setup() {
  Serial.begin(9600);

  // LCD
  lcd.init();
  lcd.backlight(); //lcd.noBacklight();
  delay(100);
  
  // RTC
  rtc.begin();
  delay(100);
  
  rtc.disable32K();
  pinMode(CLOCK_INTERRUPT_PIN, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(CLOCK_INTERRUPT_PIN), onAlarm, FALLING);
  rtc.clearAlarm(1);
  rtc.clearAlarm(2);
  rtc.writeSqwPinMode(DS3231_OFF);
  rtc.disableAlarm(1);
  rtc.setAlarm2(DateTime(), DS3231_A2_PerMinute);


  // declare pins for L298N
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);

  digitalWrite(ENA, LOW);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  // declare pins for microswitch
  pinMode(microswitchPin, INPUT_PULLUP); // will go low when triggered (active low)

  updateLCD();
}

void loop() {
  
  // print current time to Serial mon
  char date[10] = "hh:mm:ss";
  rtc.now().toString(date);
  Serial.println(date);
    
  Serial.print(" SQW: "); // the value at SQW-Pin (because of pullup 1 means no alarm)
  Serial.println(digitalRead(CLOCK_INTERRUPT_PIN));
  
  // whether a alarm happened happened
  Serial.print(" Alarm1: ");
  Serial.println(rtc.alarmFired(2));
  
  // resetting SQW and alarm 2 flag
  // using setAlarm1, the next alarm could now be configured
  if(rtc.alarmFired(2)) {
    rtc.clearAlarm(2);
    Serial.println("Alarm cleared");
    flipMinute();
    updateLCD();
  }
  delay(2000);  
}

/************************************************************************************
************************************************************************************* 
*************************************************************************************
*************************************************************************************
*************************************************************************************/




void updateLCD() {
  lcd.clear();

  DateTime now = rtc.now();
  lcd.setCursor(0,0); // top left, same as lcd.home();
  lcd.print(getTimeStr(now));

  lcd.setCursor(0,1); // bottom left
  lcd.print(getDateStr(now));

  lcd.setCursor(12,0); // top right
  // will cause issues for temp strings that aren't 4 chars, unless this is factored in
  lcd.print(getTempStr());
  lcd.write(223); // char code for ° symbol = E0 - 1 = 223 decimal = DF
  // I think that's technically for a japanese character but not complaining
  lcd.print("C");
}


String getTimeStr(DateTime now) {

  // adding leading zeros if necessary
  String twelveHourStr = leadingZeros((String)now.twelveHour());
  String minuteStr = leadingZeros((String)now.minute());
  
  return twelveHourStr + ":" + minuteStr + " " + AMPM(now);
}

String getDateStr(DateTime now) {

  // adding leading zeros if necessary
  String dayStr = leadingZeros((String)now.day());
  String monthStr = leadingZeros((String)now.month());
  
  return dayStr + "/" + monthStr + " " + daysOfTheWeek[now.dayOfTheWeek()];
}

String getTempStr() {
  return (String)round(rtc.getTemperature());
}


String AMPM(DateTime now) {
  switch(now.isPM()) {
    case 0:
      return "AM";
      break;
    case 1:
      return "PM";
      break;
    default:
      return "ERR";
      break;
  }
}

String leadingZeros(String input) {
  // a function which takes in a string and adds a leading zero if required
  // will add leading zero if string is length 1 or 0, will not if string is any longer than that
  
  
  if(input.length() < 2) {
    return "0" + input;
  }
  else {
    return input;
  }
}














void onAlarm() {
  Serial.println("Alarm ISR triggered");
}

void flipMinute() {
  // While switch isn't triggered, make the motor spin
  // Once it is triggered, stop the motor after a delay of motorDelay milliseconds

  Serial.println("flipping minute");
  while(digitalRead(microswitchPin) == HIGH) {
    digitalWrite(ENA, HIGH);
  }
  while(digitalRead(microswitchPin) == LOW) {
    digitalWrite(ENA, HIGH);
  }
  
  delay(motorDelay); //keep spinning for a little after microswitch is inactive (high) again
  digitalWrite(ENA, LOW);
  Serial.println("minute flipped");
}
