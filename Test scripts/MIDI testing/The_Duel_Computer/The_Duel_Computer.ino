
// Credit:
// Midi to Arduino Converter
//     - Andy Tran (extramaster), 2015
// https://www.extramaster.net/tools/midiToArduino/
//
// Process:
// Midi -> Midi tracks -> Note mappings -> Frequency
//
// CC0

// Set this to be the pin that your buzzer resides in. (Note that you can only have one buzzer actively using the PWM signal at a time).
int tonePin = 10;
void setup() {

}

void midi() {

    tone(tonePin, 440, 57.6);
    delay(64.0);
    tone(tonePin, 587, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 293, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 587, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 293, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 587, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 293, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 587, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 293, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 587, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 293, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 587, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 293, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 587, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 293, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 587, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 293, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 587, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 293, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 587, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 293, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 587, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 293, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 587, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 293, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 587, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 293, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 587, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 293, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 587, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 293, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 587, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 293, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 587, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 293, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 587, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 293, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 587, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 293, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 587, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 293, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 587, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 293, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 587, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 293, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 587, 14.4);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    tone(tonePin, 293, 14.4);
    delay(16.0);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    delay(16.0);
    tone(tonePin, 587, 14.4);
    delay(16.0);
    delay(16.0);
    tone(tonePin, 440, 14.4);
    delay(16.0);
    delay(16.0);
    tone(tonePin, 293, 25.2);
    delay(28.0);
    delay(3072.0);
    tone(tonePin, 293, 259.2);
    delay(288.0);
    delay(96.0);
    tone(tonePin, 195, 144.0);
    delay(160.0);
    delay(32.0);
    tone(tonePin, 220, 144.0);
    delay(160.0);
    delay(32.0);
    tone(tonePin, 246, 144.0);
    delay(160.0);
    delay(32.0);
    tone(tonePin, 261, 144.0);
    delay(160.0);
    delay(32.0);
    tone(tonePin, 293, 259.2);
    delay(288.0);
    delay(96.0);
    tone(tonePin, 195, 259.2);
    delay(288.0);
    delay(96.0);
    tone(tonePin, 195, 259.2);
    delay(288.0);
    delay(96.0);
    tone(tonePin, 329, 259.2);
    delay(288.0);
    delay(96.0);
    tone(tonePin, 261, 144.0);
    delay(160.0);
    delay(32.0);
    tone(tonePin, 293, 144.0);
    delay(160.0);
    delay(32.0);
    tone(tonePin, 329, 144.0);
    delay(160.0);
    delay(32.0);
    tone(tonePin, 369, 144.0);
    delay(160.0);
    delay(32.0);
    tone(tonePin, 391, 259.2);
    delay(288.0);
    delay(96.0);
    tone(tonePin, 207, 259.2);
    delay(288.0);
    delay(96.0);
    tone(tonePin, 207, 259.2);
    delay(288.0);
    delay(480.0);
    tone(tonePin, 391, 259.2);
    delay(288.0);
    delay(96.0);
    tone(tonePin, 195, 259.2);
    delay(288.0);
    delay(96.0);
    tone(tonePin, 195, 259.2);
    delay(288.0);
    delay(13920.0);
    tone(tonePin, 587, 691.2);
    delay(768.0);
    tone(tonePin, 391, 172.8);
    delay(192.0);
    tone(tonePin, 440, 172.8);
    delay(192.0);
    tone(tonePin, 493, 172.8);
    delay(192.0);
    tone(tonePin, 523, 172.8);
    delay(192.0);
    tone(tonePin, 587, 345.6);
    delay(384.0);
    tone(tonePin, 391, 216.0);
    delay(240.0);
    delay(144.0);
    tone(tonePin, 391, 691.2);
    delay(768.0);
    tone(tonePin, 659, 691.2);
    delay(768.0);
    tone(tonePin, 523, 172.8);
    delay(192.0);
    tone(tonePin, 587, 172.8);
    delay(192.0);
    tone(tonePin, 659, 172.8);
    delay(192.0);
    tone(tonePin, 739, 172.8);
    delay(192.0);
    tone(tonePin, 783, 345.6);
    delay(384.0);
    tone(tonePin, 391, 216.0);
    delay(240.0);
    delay(144.0);
    tone(tonePin, 391, 691.2);
    delay(768.0);
    tone(tonePin, 523, 691.2);
    delay(768.0);
    tone(tonePin, 587, 172.8);
    delay(192.0);
    tone(tonePin, 523, 172.8);
    delay(192.0);
    tone(tonePin, 493, 172.8);
    delay(192.0);
    tone(tonePin, 440, 172.8);
    delay(192.0);
    tone(tonePin, 493, 691.2);
    delay(768.0);
    tone(tonePin, 523, 172.8);
    delay(192.0);
    tone(tonePin, 493, 172.8);
    delay(192.0);
    tone(tonePin, 440, 172.8);
    delay(192.0);
    tone(tonePin, 391, 172.8);
    delay(192.0);
    tone(tonePin, 369, 691.2);
    delay(768.0);
    tone(tonePin, 391, 172.8);
    delay(192.0);
    tone(tonePin, 440, 172.8);
    delay(192.0);
    tone(tonePin, 493, 172.8);
    delay(192.0);
    tone(tonePin, 391, 172.8);
    delay(192.0);
    tone(tonePin, 440, 345.6);
    delay(384.0);
    tone(tonePin, 493, 345.6);
    delay(384.0);
    tone(tonePin, 523, 345.6);
    delay(384.0);
    tone(tonePin, 554, 345.6);
    delay(384.0);
    tone(tonePin, 587, 1036.8);
    delay(1152.0);
    delay(1920.0);
    tone(tonePin, 493, 345.6);
    delay(384.0);
    tone(tonePin, 659, 345.6);
    delay(384.0);
    tone(tonePin, 783, 345.6);
    delay(384.0);
    tone(tonePin, 739, 1382.4);
    delay(1536.0);
    delay(6144.0);
    tone(tonePin, 587, 691.2);
    delay(768.0);
    tone(tonePin, 783, 345.6);
    delay(384.0);
    tone(tonePin, 587, 28.8);
    delay(32.0);
    tone(tonePin, 987, 316.8);
    delay(352.0);
    tone(tonePin, 880, 1008.0);
    delay(1120.0);
    delay(3456.0);
    tone(tonePin, 391, 345.6);
    delay(384.0);
    tone(tonePin, 523, 345.6);
    delay(384.0);
    tone(tonePin, 659, 345.6);
    delay(384.0);
    tone(tonePin, 587, 691.2);
    delay(768.0);
    tone(tonePin, 783, 345.6);
    delay(384.0);
    tone(tonePin, 493, 345.6);
    delay(384.0);
    tone(tonePin, 440, 1036.8);
    delay(1152.0);
    tone(tonePin, 659, 345.6);
    delay(384.0);
    tone(tonePin, 587, 345.6);
    delay(384.0);
    tone(tonePin, 987, 345.6);
    delay(384.0);
    tone(tonePin, 880, 691.2);
    delay(768.0);
    delay(3072.0);
    tone(tonePin, 329, 345.6);
    delay(384.0);
    tone(tonePin, 391, 345.6);
    delay(384.0);
    tone(tonePin, 493, 345.6);
    delay(384.0);
    tone(tonePin, 659, 345.6);
    delay(384.0);
    tone(tonePin, 587, 345.6);
    delay(384.0);
    tone(tonePin, 739, 990.0);
    delay(1100.0);
    delay(3124.0);
    tone(tonePin, 440, 345.6);
    delay(384.0);
    tone(tonePin, 493, 345.6);
    delay(384.0);
    tone(tonePin, 554, 345.6);
    delay(384.0);
    tone(tonePin, 440, 345.6);
    delay(384.0);
    tone(tonePin, 587, 345.6);
    delay(384.0);
    tone(tonePin, 659, 345.6);
    delay(384.0);
    tone(tonePin, 739, 345.6);
    delay(384.0);
    tone(tonePin, 880, 345.6);
    delay(384.0);
    tone(tonePin, 783, 345.6);
    delay(384.0);
    tone(tonePin, 783, 28.8);
    delay(32.0);
    tone(tonePin, 880, 316.8);
    delay(352.0);
    tone(tonePin, 987, 345.6);
    delay(384.0);
    tone(tonePin, 783, 345.6);
    delay(384.0);
    tone(tonePin, 587, 43.2);
    delay(48.0);
    tone(tonePin, 880, 302.4);
    delay(336.0);
    tone(tonePin, 1174, 1036.8);
    delay(1152.0);
    delay(3072.0);
    tone(tonePin, 523, 345.6);
    delay(384.0);
    tone(tonePin, 587, 345.6);
    delay(384.0);
    tone(tonePin, 659, 345.6);
    delay(384.0);
    tone(tonePin, 783, 345.6);
    delay(384.0);
    tone(tonePin, 391, 345.6);
    delay(384.0);
    tone(tonePin, 440, 345.6);
    delay(384.0);
    tone(tonePin, 493, 345.6);
    delay(384.0);
    tone(tonePin, 587, 345.6);
    delay(384.0);
    tone(tonePin, 440, 345.6);
    delay(384.0);
    tone(tonePin, 493, 345.6);
    delay(384.0);
    tone(tonePin, 554, 345.6);
    delay(384.0);
    tone(tonePin, 440, 345.6);
    delay(384.0);
    tone(tonePin, 587, 345.6);
    delay(384.0);
    tone(tonePin, 659, 345.6);
    delay(384.0);
    tone(tonePin, 739, 345.6);
    delay(384.0);
    tone(tonePin, 587, 345.6);
    delay(384.0);
    tone(tonePin, 391, 288.0);
    delay(320.0);
    tone(tonePin, 987, 345.6);
    delay(384.0);
    tone(tonePin, 1174, 345.6);
    delay(384.0);
    tone(tonePin, 783, 273.6);
    delay(304.0);
    tone(tonePin, 1479, 345.6);
    delay(384.0);
    tone(tonePin, 880, 273.6);
    delay(304.0);
    tone(tonePin, 1174, 345.6);
    delay(384.0);
    tone(tonePin, 1046, 345.6);
    delay(384.0);
    tone(tonePin, 987, 345.6);
    delay(384.0);
    tone(tonePin, 659, 280.8);
    delay(312.0);
    tone(tonePin, 987, 345.6);
    delay(384.0);
    tone(tonePin, 783, 345.6);
    delay(384.0);
    tone(tonePin, 739, 345.6);
    delay(384.0);
    tone(tonePin, 440, 273.6);
    delay(304.0);
    tone(tonePin, 739, 345.6);
    delay(384.0);
    tone(tonePin, 587, 345.6);
    delay(384.0);
    tone(tonePin, 659, 345.6);
    delay(384.0);
    tone(tonePin, 783, 345.6);
    delay(384.0);
    tone(tonePin, 523, 345.6);
    delay(384.0);
    tone(tonePin, 659, 345.6);
    delay(384.0);
    tone(tonePin, 587, 345.6);
    delay(384.0);
    tone(tonePin, 783, 345.6);
    delay(384.0);
    tone(tonePin, 493, 345.6);
    delay(384.0);
    tone(tonePin, 587, 345.6);
    delay(384.0);
    tone(tonePin, 554, 345.6);
    delay(384.0);
    tone(tonePin, 659, 345.6);
    delay(384.0);
    tone(tonePin, 440, 345.6);
    delay(384.0);
    tone(tonePin, 391, 345.6);
    delay(384.0);
    tone(tonePin, 369, 345.6);
    delay(384.0);
    tone(tonePin, 440, 345.6);
    delay(384.0);
    tone(tonePin, 293, 691.2);
    delay(768.0);
    tone(tonePin, 391, 1036.8);
    delay(1152.0);
    tone(tonePin, 493, 172.8);
    delay(192.0);
    tone(tonePin, 493, 172.8);
    delay(192.0);
    tone(tonePin, 440, 1036.8);
    delay(1152.0);
    tone(tonePin, 587, 172.8);
    delay(192.0);
    tone(tonePin, 587, 172.8);
    delay(192.0);
    tone(tonePin, 493, 1036.8);
    delay(1152.0);
    tone(tonePin, 783, 172.8);
    delay(192.0);
    tone(tonePin, 783, 172.8);
    delay(192.0);
    tone(tonePin, 739, 1036.8);
    delay(1152.0);
    tone(tonePin, 587, 345.6);
    delay(384.0);
    tone(tonePin, 659, 1036.8);
    delay(1152.0);
    tone(tonePin, 523, 345.6);
    delay(384.0);
    tone(tonePin, 587, 1036.8);
    delay(1152.0);
    tone(tonePin, 493, 345.6);
    delay(384.0);
    tone(tonePin, 440, 1036.8);
    delay(1152.0);
    tone(tonePin, 493, 345.6);
    delay(384.0);
    tone(tonePin, 440, 691.2);
    delay(768.0);
    tone(tonePin, 493, 345.6);
    delay(384.0);
    tone(tonePin, 440, 345.6);
    delay(384.0);
    tone(tonePin, 587, 172.8);
    delay(192.0);
    tone(tonePin, 783, 172.8);
    delay(192.0);
    tone(tonePin, 987, 172.8);
    delay(192.0);
    tone(tonePin, 783, 172.8);
    delay(192.0);
    tone(tonePin, 587, 172.8);
    delay(192.0);
    tone(tonePin, 783, 172.8);
    delay(192.0);
    tone(tonePin, 987, 172.8);
    delay(192.0);
    tone(tonePin, 783, 172.8);
    delay(192.0);
    tone(tonePin, 587, 172.8);
    delay(192.0);
    tone(tonePin, 739, 172.8);
    delay(192.0);
    tone(tonePin, 880, 172.8);
    delay(192.0);
    tone(tonePin, 739, 172.8);
    delay(192.0);
    tone(tonePin, 587, 172.8);
    delay(192.0);
    tone(tonePin, 739, 172.8);
    delay(192.0);
    tone(tonePin, 880, 172.8);
    delay(192.0);
    tone(tonePin, 739, 172.8);
    delay(192.0);
    tone(tonePin, 493, 172.8);
    delay(192.0);
    tone(tonePin, 659, 172.8);
    delay(192.0);
    tone(tonePin, 783, 172.8);
    delay(192.0);
    tone(tonePin, 659, 172.8);
    delay(192.0);
    tone(tonePin, 493, 172.8);
    delay(192.0);
    tone(tonePin, 659, 172.8);
    delay(192.0);
    tone(tonePin, 783, 172.8);
    delay(192.0);
    tone(tonePin, 659, 172.8);
    delay(192.0);
    tone(tonePin, 493, 172.8);
    delay(192.0);
    tone(tonePin, 587, 172.8);
    delay(192.0);
    tone(tonePin, 739, 172.8);
    delay(192.0);
    tone(tonePin, 587, 172.8);
    delay(192.0);
    tone(tonePin, 493, 172.8);
    delay(192.0);
    tone(tonePin, 587, 172.8);
    delay(192.0);
    tone(tonePin, 739, 172.8);
    delay(192.0);
    tone(tonePin, 587, 172.8);
    delay(192.0);
    tone(tonePin, 391, 172.8);
    delay(192.0);
    tone(tonePin, 523, 172.8);
    delay(192.0);
    tone(tonePin, 659, 172.8);
    delay(192.0);
    tone(tonePin, 523, 172.8);
    delay(192.0);
    tone(tonePin, 391, 172.8);
    delay(192.0);
    tone(tonePin, 523, 172.8);
    delay(192.0);
    tone(tonePin, 659, 172.8);
    delay(192.0);
    tone(tonePin, 523, 172.8);
    delay(192.0);
    tone(tonePin, 391, 172.8);
    delay(192.0);
    tone(tonePin, 493, 172.8);
    delay(192.0);
    tone(tonePin, 587, 172.8);
    delay(192.0);
    tone(tonePin, 493, 172.8);
    delay(192.0);
    tone(tonePin, 391, 172.8);
    delay(192.0);
    tone(tonePin, 493, 172.8);
    delay(192.0);
    tone(tonePin, 587, 172.8);
    delay(192.0);
    tone(tonePin, 493, 172.8);
    delay(192.0);
    tone(tonePin, 440, 172.8);
    delay(192.0);
    tone(tonePin, 554, 172.8);
    delay(192.0);
    tone(tonePin, 659, 172.8);
    delay(192.0);
    tone(tonePin, 554, 172.8);
    delay(192.0);
    tone(tonePin, 440, 172.8);
    delay(192.0);
    tone(tonePin, 554, 172.8);
    delay(192.0);
    tone(tonePin, 659, 172.8);
    delay(192.0);
    tone(tonePin, 554, 172.8);
    delay(192.0);
    tone(tonePin, 587, 172.8);
    delay(192.0);
    tone(tonePin, 739, 172.8);
    delay(192.0);
    tone(tonePin, 880, 172.8);
    delay(192.0);
    tone(tonePin, 739, 172.8);
    delay(192.0);
    tone(tonePin, 587, 172.8);
    delay(192.0);
    tone(tonePin, 739, 172.8);
    delay(192.0);
    tone(tonePin, 880, 172.8);
    delay(192.0);
    tone(tonePin, 1174, 172.8);
    delay(192.0);
    tone(tonePin, 587, 626.4);
    delay(696.0);
    tone(tonePin, 783, 586.8);
    delay(652.0);
    delay(192.0);
    tone(tonePin, 440, 140.4);
    delay(156.0);
    tone(tonePin, 880, 172.8);
    delay(192.0);
    tone(tonePin, 880, 172.8);
    delay(192.0);
    tone(tonePin, 587, 529.2);
    delay(588.0);
    tone(tonePin, 391, 136.8);
    delay(152.0);
    tone(tonePin, 783, 172.8);
    delay(192.0);
    tone(tonePin, 783, 172.8);
    delay(192.0);
    tone(tonePin, 493, 568.8);
    delay(632.0);
    delay(192.0);
    tone(tonePin, 293, 136.8);
    delay(152.0);
    tone(tonePin, 587, 172.8);
    delay(192.0);
    tone(tonePin, 587, 172.8);
    delay(192.0);
    tone(tonePin, 369, 691.2);
    delay(768.0);
    tone(tonePin, 391, 522.0);
    delay(580.0);
    tone(tonePin, 440, 345.6);
    delay(384.0);
    tone(tonePin, 493, 345.6);
    delay(384.0);
    tone(tonePin, 587, 345.6);
    delay(384.0);
    tone(tonePin, 554, 1382.4);
    delay(1536.0);
    tone(tonePin, 587, 3.6);
    delay(4.0);
    tone(tonePin, 987, 345.6);
    delay(384.0);
    tone(tonePin, 987, 345.6);
    delay(384.0);
    tone(tonePin, 523, 270.0);
    delay(300.0);
    tone(tonePin, 1174, 345.6);
    delay(384.0);
    tone(tonePin, 587, 288.0);
    delay(320.0);
    tone(tonePin, 1046, 345.6);
    delay(384.0);
    tone(tonePin, 987, 345.6);
    delay(384.0);
    tone(tonePin, 880, 345.6);
    delay(384.0);
    tone(tonePin, 391, 284.4);
    delay(316.0);
    tone(tonePin, 783, 345.6);
    delay(384.0);
    tone(tonePin, 880, 345.6);
    delay(384.0);
    tone(tonePin, 493, 277.2);
    delay(308.0);
    tone(tonePin, 987, 345.6);
    delay(384.0);
    tone(tonePin, 880, 345.6);
    delay(384.0);
    tone(tonePin, 783, 345.6);
    delay(384.0);
    tone(tonePin, 739, 345.6);
    delay(384.0);
    tone(tonePin, 659, 946.8);
    delay(1052.0);
    tone(tonePin, 587, 691.2);
    delay(768.0);
    tone(tonePin, 783, 345.6);
    delay(384.0);
    tone(tonePin, 587, 345.6);
    delay(384.0);
    tone(tonePin, 554, 1036.8);
    delay(1152.0);
    tone(tonePin, 659, 345.6);
    delay(384.0);
    tone(tonePin, 587, 3.6);
    delay(4.0);
    tone(tonePin, 1174, 691.2);
    delay(768.0);
    tone(tonePin, 783, 172.8);
    delay(192.0);
    tone(tonePin, 880, 172.8);
    delay(192.0);
    tone(tonePin, 987, 172.8);
    delay(192.0);
    tone(tonePin, 1046, 172.8);
    delay(192.0);
    tone(tonePin, 1174, 1036.8);
    delay(1152.0);
    tone(tonePin, 783, 345.6);
    delay(384.0);
    tone(tonePin, 1318, 691.2);
    delay(768.0);
    tone(tonePin, 1046, 172.8);
    delay(192.0);
    tone(tonePin, 1174, 172.8);
    delay(192.0);
    tone(tonePin, 1318, 172.8);
    delay(192.0);
    tone(tonePin, 1479, 172.8);
    delay(192.0);
    tone(tonePin, 783, 14.4);
    delay(16.0);
    delay(5760.0);
    tone(tonePin, 391, 115.2);
    delay(128.0);
    tone(tonePin, 493, 115.2);
    delay(128.0);
    tone(tonePin, 587, 115.2);
    delay(128.0);
    tone(tonePin, 783, 115.2);
    delay(128.0);
    tone(tonePin, 587, 115.2);
    delay(128.0);
    tone(tonePin, 493, 115.2);
    delay(128.0);
    tone(tonePin, 391, 115.2);
    delay(128.0);
    tone(tonePin, 493, 115.2);
    delay(128.0);
    tone(tonePin, 587, 115.2);
    delay(128.0);
    tone(tonePin, 783, 115.2);
    delay(128.0);
    tone(tonePin, 587, 115.2);
    delay(128.0);
    tone(tonePin, 493, 115.2);
    delay(128.0);
    tone(tonePin, 391, 115.2);
    delay(128.0);
    tone(tonePin, 493, 115.2);
    delay(128.0);
    tone(tonePin, 587, 115.2);
    delay(128.0);
    tone(tonePin, 783, 115.2);
    delay(128.0);
    tone(tonePin, 587, 115.2);
    delay(128.0);
    tone(tonePin, 493, 115.2);
    delay(128.0);
    tone(tonePin, 391, 115.2);
    delay(128.0);
    tone(tonePin, 493, 115.2);
    delay(128.0);
    tone(tonePin, 587, 115.2);
    delay(128.0);
    tone(tonePin, 783, 115.2);
    delay(128.0);
    tone(tonePin, 587, 115.2);
    delay(128.0);
    tone(tonePin, 493, 115.2);
    delay(128.0);
    tone(tonePin, 391, 172.8);
    delay(192.0);

}

void loop() {
    // Play midi
    midi();
}
