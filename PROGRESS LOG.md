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