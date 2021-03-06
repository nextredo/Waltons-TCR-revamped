## 11/01/2021
- Starting work on code portion of project
- Work completed before today:
	- Modified a MG90S servo motor to be continuous (replaced potentiometer with voltage divider)
	- Removed original clock internals
	- Cleaned out clock casing
	- Attempted to retrobright the clock exterior (had little effect, need more peroxide)
	- Affixed servo to clock mechanism (using original gearing system)
	- Gathered necessary components for the build
- Work completed today:
	- Servo motor is incredibly noisy
		- Attempted to fix using a glass jar filled with soundproofing material
		- Did not work
	- Replacing continuous servo motor with an old printer motor and motor driver board
		- Will install a microswitch to detect once the minutes number has flipped over
	- Removed back part of clock assembly right hand side mounting plate
		- Allows motor I salvaged from a printer to interface with the main drive gear directly
		- Hot glued mounting solution for this motor

## 12/01/2021
- Used angle grinder to remove unnecessary parts of switch mounting bracket
	- Removed parts such that I can put a joystick in place of the tuning wheel
	- And so I can use a different volume potentiometer mounting solution
- Removed bottom part of right metal clock assembly plate
	- Added microswitch to this area to detect once the minute digit has almost finished changing
- Removed slits of material from motor mounting assembly to allow for zipties to tie the motor down
- Used [this link](http://arduino.esp8266.com/stable/package_esp8266com_index.json) to install the ESP8266 arduino board
- Made wiring harness for 5V barrel (centre-positive) plug and power distribution bus (a bit of veroboard)
- Made cable with centre positive male barrel on one end and USB-A male on other end (basically a USB adapter for the clock's barrel in)

## 13/01/2021
- Salvaged a potentiometer with switch from an old CB radio
	- Used this to make a switch to control the brightness of the LED backlight
	- Works
- Replaced original incandescent bulb with an orange LED
	- Added 0.45k resistor in series on anode to limit current through Arduino
	- Wrapped in reflective foil from a YouFoodz delivery box
- Wired up L298N motor driver to the ESP8266 and the motor itself
	- Having issues getting PWM speed control on the `ENA (Enable A)` pin to work
	- Using the provided jumper cable works, however using the ESP's PWM out seems to not
	- Works fine with `digitalWrite` instead of `analogWrite` too
	- Giving up on PWM speed control for now, just gonna use digitalWrite to turn it on or off
	- All seems to work nice and well :))
- Discovered that sometimes the ESP needs a bit of "encouragement" with the reset button in order to upload code to it
- Also discovered that motor positioning is VERY particular
	- Must get motor in exact right spot to interface with other gears, otherwise doesn't work
	- Will need to upgrade mount to fix this
- Upgraded motor mount through extensive use of hot glue and deception
	- Ziptied motor onto mount
	- Works a treat
	
## 14/01/2021
- Made the following modifications to the electronics:
	- Made I2C bus
	- Made LCD I2C wiring harness
	- Made ESP8266 connector for I2C bus
	- Made joystick connector for ESP8266
- While attempting to connect the joystick pins to the ESP8266, some googling yielded the following results:
	- It appears GPIO pins 6-11 are used to connect the ESP chip to the flash chip (where the user program is stored)
	- I've had difficulty with these pins in the past, and this confirms why
	- So, I'll be switching to the Arduino Nano instead now
		- Has more than enough pins for me, so I think I'll give it a go
	- I'm using [this](https://www.banggood.com/Geekcreit-ATmega328P-Nano-V3-Module-Improved-Version-With-USB-Cable-Development-Board-Geekcreit-for-Arduino-products-that-work-with-official-Arduino-boards-p-933647.html) specific nano board
		- Requires you download a driver that can be found on the page
		- After installing the driver I had some slight issues uploading the code, however this was fixed by selecting the old bootloader instead of the new one
	- Seems to work fine with the blink code, so I've connected the wiring harnesses to it
		- Also works fine with motor driver testing code - seems I made the right decision
	- Joystick testing
		- `digitalRead` on floating pins yields random inputs
		- So I'm gonna change the COM on the joystick to ground, and have the digital inputs set in `INPUT_PULLUP`
		- Changed COM to ground, works perfectly now
			- Used sharpie on COM wire to change it from red to black, so as to indicate that it's grounded
	- Orange LED testing
		- Wired up a micro-losi connector between ground and D5 on the nano
		- Ran a script to scroll through all 255 values of `analogWrite` on that pin
		- Works perfectly
	- Connected microswitch
	- Hotglued various components into place (brightness knob, 
	- LCD testing
		- LCD not happy at all
		- Testing many different libraries to see which ones actually work
		- After a bit of research I found I had to adjust the potentiometer on th eback to bring the image into focus, seemingly ok now
		- However library is still dodge, must find a better one
		- The simple LiquidCrystal_I2C library works perfectly for this project
			- This is absolutely sick
	- Added 2 additional resistors in parallel for the main clock light LED
- Mounted LCD display
- Changed orientation of joystick so it can actually fit in the housing with the LCD screen

## 15/01/2021
- Discovering issues when attempting to wire in the BMP280 pressure sensor
	- This sensor uses 3.3v logic on the I2C bus, whereas the LCD uses 5v
	- Confirmed this with the oscilloscope
	- Will need to buy a level shifter to overcome this voltage difference
- Wired up DS3231 RTC module
	- Using [this](https://github.com/NorthernWidget/DS3231) library to interface with it
	- DS3231 seems to play nicely with the Arduino, very much appreciated
- Wired up all components and mounted them in the correct spots
- Works like a charm
	- Wiring is a bit ugly but seems ok for now, might improve later when I add the BMP280
	- DS3231 has a temperature sensor in it so I mightn't even need to add the extra sensor
	- One strange issue however - the DS3231 shows up with 2 separate I2C addresses, whereas the LCD only has 1
		- A short google search and a read of [this](https://www.reddit.com/r/arduino/comments/4bo5sr/why_does_my_ds3231_rtc_have_two_unique_i2c/) reddit post later reveals what's going on
		- Apparently the DS3231 has onboard memory (`AT24C32 - 32k EEPROM at I2C address 0x57`), which can be used independently of the RTC itself (`address 0x68`)
		- Using the I2C scanner it seems the LCD has `address 0x27`
- Still need to set the clock to the correct date and time
- However, for now the main physical build of the clock is complete!
- Not so fast - I forgot to add the piezo and speaker
	- Better do that now
- Wired speaker positive into D10 and negative to ground through a 225 ohm equivalent resistor
- Wired piezo to A6 and ground
- Having difficulty with piezo as a knock sensor
	- I connected it exactly like the freetronics site specified, however this doesn't seem to be working
	- It erroneously triggers, apparently due to signal interference in the wires as noted after some googling
	- I think I'll just turn the side knob into the snooze button instead, and have the piezo as a secondary tone generator
	- Tried using it as a tone generator, seems to be broken or has a real bad connection
		- Works fine using D10 for the speaker, not so much for the buzzer though
- Excellent - all seems in working order
- Now just gotta code the thing :))


## 18/01/2021
- Messed around with playing MIDI files on the arduino
	- Discovered that if I want it to sound any good, I'll need a second buzzer for bass, or to have a microSD reader to store proper songs on
	- Most likely the microSD reader
- Messed around with DS3231
	- Trying new library (RTClib) by Adafruit
	- Works much better than the lib I was using before - I think I'll stick with this one
		- Thanks Adafruit! :)
	- Set RTC to correct time


## 19/01/2021
- More coding for the DS3231
	- Planning to use interrupts from alarm(2) to trigger when the clock should flip to the next minute
		- Using this means you can free up the main code to do other stuff while the RTC is doing its thing
		- Also means you aren't using the delay() function, and so the drift is much less (as delay() can drift about 1 second per day)
	- Alternatively...
		- Using the `interrupts1Hz` sketch from the `RTClib` library, we could simply have an ISR run each second to calculate the current time
		- And use said ISR to count to 60 and trigger the motor once every minute
			- As well as updating the display?
				- Or could update the display along with the motor change if not needing seconds count
			- Although this does sound kinda slow for an ISR, it's better than communicating by I2C every second
			- Might also cause issues when the alarm uses the same pin?
	- 2x alternatively...
		- Set alarms once every minute and use that to flip the clock over
		- Means you don't get seconds information, but also means the main code has loads more time to do stuff
	- More on this in `IMPORTANT NOTES.md`

- Tried to code DS3231 and L298N interaction stuff
	- For some reason, the L298N isn't spinning the motor
	- Yeah turns out it was on the wrong pins haha OOPS
	- Also turns out ISR doesn't like making the next alarm or flipping the minute
	- Changed flip code so that it:
		- Spins motor while the microswitch is HIGH
		- Once set LOW it keeps spinning until HIGH again
		- Spin for a few millis longer than that
		- End
		- May need to also have it so it can recover from being stuck with microswitch active
	- Need to change code so it's on the minute every minute not 60 sec from when it powers on
		- Get rtc.now() and set next alarm in x seconds when it reaches 00
		- OR use alarm mode `DS3231_A1_Second ` to do it when seconds match and set seconds to 00
		- Even better, use `alarm(2)` and mode `DS3231_A2_PerMinute` to get an alarm every minute
- Coded it so DS3231 works with L298N
	- Added part of this into `MAIN_CODE.ino`
	

## 20/01/2021
- Discovered the Arduino Nano has 1024 bytes of EEPROM onboard
	- This could be useful for remembering user settings once I get around to implementing them
- Going to try and hook the DS3231 up to the LCD today
	- Works perfectly
	- I had a bit of trouble at the start as I forgot to include `pinMode()` and `digitalWrite()` setup commands for the L298N and microswitch
	- Works fine now though
- Messed around with MIDI stuff more
	- Fun but if I actually want a decent song to play, I need to put an SD adapter on the Arduino
	

## 22/01/2021
- Watched a 50-minute video about PlatformIO (a VS Code extension for embedded C++ development)
	- Going to migrate main code over to this format for ease of use
- Tested the `setBacklight()` function
	- Only accepts either `0` or `1` - can't adjust the brightness of the LCD's backlight, only toggle it


## 03/03/2021
- Been a while
- Wired in microSD reader
	- Found an old unmarked 1GB microSD
	- Flashed with [this](https://www.sdcard.org/downloads/formatter/) tool
- Opened simple test sketch for the pre-installed SD library
	- Doesn't work (naturally)
		- After much debugging and windows explorer deciding to superheat and consequently brick a 32gb card full of data, I found why it wasn't working
		- Turns out it simply didn't like the card I was using
			- After plugging in a different (16GB) card, it seemed perfectly happy to read the files off it
	- Had to steal that 16GB card from my DSi, guess I don't use that much anyways ¯\_(ツ)_/¯
		- FAT32
	- Works!
		- But extremely quiet
			- Will need a proper amp for this speaker if it's to be an alarm
	- Followed [this](https://maker.pro/arduino/projects/arduino-audio-player) article to get the speaker going properly
- Also plugged in a buzzer to D9 and ran a little test script on it
	- Seems to work fine
	
	
## 02/04/2021
- Began work on the motor mount
	- Completed solidworks file for the part
	- Exported as STL and begun printing
	- Print finished without a hitch