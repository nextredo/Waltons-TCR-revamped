// *********************************************
// RTC
#include <RTClib.h>
RTC_DS3231 rtc;

#define CLOCK_INTERRUPT_PIN 2
#define nextAlarmDelay 10

// *********************************************
// L298N
#define IN1 7 // D7, direction pin 1
#define IN2 8 // D8, direction pin 2
#define ENA 6 // D6, enable pin (PWM)

// *********************************************
// microswitch
#define microswitchPin 12 // D12, active low
#define motorDelay 350 // F() macro means var stored in progmem instead of RAM

void setup() {
  Serial.begin(9600);

  // ************************
  // RTC
  rtc.begin();
  rtc.disable32K();
  // RTC SQW interrupt declaration
  pinMode(CLOCK_INTERRUPT_PIN, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(CLOCK_INTERRUPT_PIN), onAlarm, FALLING);
  // Reset RTC settings
  //rtc.clearAlarm(1); // wiping this alarm would clear the user-set alarm on wake
  rtc.clearAlarm(2);
  rtc.writeSqwPinMode(DS3231_OFF); // stop oscillating signals at SQW Pin otherwise setAlarm1 will fail
  //rtc.disableAlarm(1);
  //rtc.disableAlarm(2);

  // set first alarm (for when clock should flip)
  // don't need to include func to return current time
  
}

void loop() {
  
}

void onAlarm() {
  
}
