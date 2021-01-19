## ESP8266 pin definitions
- The pin numbers as noted on the ESP8266 pinout diagram are not for the Arduino IDE
	- Use the GPIO number of the pin to refer to it with code
	- For example, GPIO13 would be pin 13 in the Arduino IDE

## Uploading code to boards
- For whatever reason, sometimes the Arduino IDE flat out refuses to upload to the microcontroller
	- If it does this, try opening a serial monitor and then uploading code
	- I think this helps establish a serial connection before the uploader tries to
	- Either way, it seems to work

## DS3231
- From the datasheet:
	- `The clock provides two programmable time-of-day alarms and a programmable square-wave output.`
	- `The INT/SQW pin either generates an interrupt due to alarm condition or outputs a square-wave signal and the selection is controlled by the bit INTCN.`
- Can only do either an alarm or a periodic output
	- Means I can either count seconds and system time on the Arduino with the 1Hz output
	- Or use `alarm(1)` to trigger the motor each minute and update the LCD
		- and use `alarm(2)` to provide actual alarm functionality
		- Means ISR on SQW pin needs a bit of code to determine what alarm is triggering it, and then act accordingly
		- Either way, using this method means I can choose between minute / second precision, while maintaining alarm functionality
- Using the following code, I determined it takes around `2972` microseconds (`0.002972` seconds) to execute
	```
	unsigned long start = micros();
    if(!rtc.setAlarm1(
            rtc.now() + TimeSpan(10),
            DS3231_A1_Second // this mode triggers the alarm when the seconds match. See Doxygen for other options
    )) {
        Serial.println("Error, alarm wasn't set!");
    }else {
        Serial.println("Alarm will happen in 10 seconds!");  
    }
    unsigned long end = micros();
    unsigned long delta = end - start;
    Serial.println("took " + String(delta) + " microseconds to execute");
	```
