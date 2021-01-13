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
