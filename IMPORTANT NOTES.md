## ESP8266 pin definitions
- The pin numbers as noted on the ESP8266 pinout diagram are not for the Arduino IDE
	- Use the GPIO number of the pin to refer to it with code
	- For example, GPIO13 would be pin 13 in the Arduino IDE

## Uploading code to boards
- For whatever reason, sometimes the Arduino IDE flat out refuses to upload to the microcontroller
	- If it does this, try opening a serial monitor and then uploading code
	- I think this helps establish a serial connection before the uploader tries to
	- Either way, it seems to work
