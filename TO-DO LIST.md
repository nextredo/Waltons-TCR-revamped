## Physical
- Add BMP280
- Add piezo #2 for secondary component of sound
	- Or for knock detection for alarm snooze button
- Add microSD card reader so I can play music from it for an alarm
- Add digital potentiometer for speaker volume
	- Even better - just get a speaker amp the Ardu can talk to
		- Yeah nah you're going to *NEED* a little speaker amp because the arduino simply can't push enough current
- Add digital potentiometer for LCD brightness (for now just have it activate when you push a button)
- CAD an adapter for the joystick head to the retro tuning knob
- CAD a new motor mount which can be affixed to the housing with vibration damping mounts
- Retrobright the main housing again (more peroxide)
- Add USB extender to back of housing so I can update the code without removing the top housing
- Alarm dial
	- Remove alarm dial functionality and replace existing knob with a potentiometer to control the LCD's brightness
	- Doing so will allow the clock to spin easier
	- 
- Something is catching when I flip the clock back from `6:00` to `5:59` - investigate it
- Lengthen the Nano's power wire so it doesn't go over the motor
- Tape up the speaker's connector wire (cat chewed `skpr+` a bit)
- Add position sensors to the clock's main display
	- So arduino can sense the discrepancy on startup and spin the motor until it's correct?
	- Probably not necessary (overcomplicates things and wouldn't be much use anyways)
- Remove the bar from the cover over the LCD
	- Or get a new piece of plastic for that window

## Software
- Code alarm setting and playback
- Code settings menu and how to access it
- Incorporate working code into `MAIN_CODE.ino`
- Alarm indicator on main screen of LCD (cross through bell for off, bell with chons for on)
- If including knock detection for snooze:
	- Incorporate secret knock to play never gonna give you up or something when on the main screen

## Other
- Figure out what to do with the little viewing window where the alarm dial currently is
	- Incorporate a little LED VU bar thingo?
		- Could display 