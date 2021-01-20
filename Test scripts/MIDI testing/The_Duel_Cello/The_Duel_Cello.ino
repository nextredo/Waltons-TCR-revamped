
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

    tone(tonePin, 146, 259.2);
    delay(288.0);
    delay(96.0);
    tone(tonePin, 97, 144.0);
    delay(160.0);
    delay(32.0);
    tone(tonePin, 110, 144.0);
    delay(160.0);
    delay(32.0);
    tone(tonePin, 123, 144.0);
    delay(160.0);
    delay(32.0);
    tone(tonePin, 130, 144.0);
    delay(160.0);
    delay(32.0);
    tone(tonePin, 146, 259.2);
    delay(288.0);
    delay(96.0);
    tone(tonePin, 97, 259.2);
    delay(288.0);
    delay(96.0);
    tone(tonePin, 97, 864.0);
    delay(960.0);
    delay(10944.0);
    tone(tonePin, 146, 259.2);
    delay(288.0);
    delay(96.0);
    tone(tonePin, 97, 144.0);
    delay(160.0);
    delay(32.0);
    tone(tonePin, 110, 144.0);
    delay(160.0);
    delay(32.0);
    tone(tonePin, 123, 144.0);
    delay(160.0);
    delay(32.0);
    tone(tonePin, 130, 144.0);
    delay(160.0);
    delay(32.0);
    tone(tonePin, 146, 259.2);
    delay(288.0);
    delay(96.0);
    tone(tonePin, 97, 259.2);
    delay(288.0);
    delay(96.0);
    tone(tonePin, 97, 259.2);
    delay(288.0);
    delay(96.0);
    tone(tonePin, 164, 259.2);
    delay(288.0);
    delay(96.0);
    tone(tonePin, 130, 144.0);
    delay(160.0);
    delay(32.0);
    tone(tonePin, 146, 144.0);
    delay(160.0);
    delay(32.0);
    tone(tonePin, 164, 144.0);
    delay(160.0);
    delay(32.0);
    tone(tonePin, 184, 144.0);
    delay(160.0);
    delay(32.0);
    tone(tonePin, 195, 259.2);
    delay(288.0);
    delay(96.0);
    tone(tonePin, 97, 259.2);
    delay(288.0);
    delay(96.0);
    tone(tonePin, 97, 691.2);
    delay(768.0);
    delay(8832.0);
    tone(tonePin, 146, 630.0);
    delay(700.0);
    delay(68.0);
    tone(tonePin, 97, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 110, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 123, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 130, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 146, 345.6);
    delay(384.0);
    tone(tonePin, 97, 216.0);
    delay(240.0);
    delay(144.0);
    tone(tonePin, 97, 691.2);
    delay(768.0);
    tone(tonePin, 164, 691.2);
    delay(768.0);
    tone(tonePin, 130, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 146, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 164, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 184, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 195, 345.6);
    delay(384.0);
    tone(tonePin, 97, 216.0);
    delay(240.0);
    delay(144.0);
    tone(tonePin, 97, 691.2);
    delay(768.0);
    tone(tonePin, 130, 691.2);
    delay(768.0);
    tone(tonePin, 146, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 130, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 123, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 110, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 123, 691.2);
    delay(768.0);
    tone(tonePin, 130, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 123, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 110, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 97, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 92, 691.2);
    delay(768.0);
    tone(tonePin, 97, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 110, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 123, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 97, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 110, 345.6);
    delay(384.0);
    tone(tonePin, 123, 345.6);
    delay(384.0);
    tone(tonePin, 130, 345.6);
    delay(384.0);
    tone(tonePin, 138, 345.6);
    delay(384.0);
    delay(6144.0);
    tone(tonePin, 130, 630.0);
    delay(700.0);
    delay(68.0);
    tone(tonePin, 146, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 130, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 123, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 110, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 123, 630.0);
    delay(700.0);
    delay(68.0);
    tone(tonePin, 130, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 123, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 110, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 97, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 92, 630.0);
    delay(700.0);
    delay(68.0);
    tone(tonePin, 97, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 110, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 123, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 97, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 110, 345.6);
    delay(384.0);
    tone(tonePin, 123, 345.6);
    delay(384.0);
    tone(tonePin, 130, 345.6);
    delay(384.0);
    tone(tonePin, 138, 345.6);
    delay(384.0);
    tone(tonePin, 146, 630.0);
    delay(700.0);
    delay(68.0);
    tone(tonePin, 195, 288.0);
    delay(320.0);
    delay(64.0);
    tone(tonePin, 246, 345.6);
    delay(384.0);
    tone(tonePin, 220, 1350.0);
    delay(1500.0);
    delay(3492.0);
    tone(tonePin, 97, 288.0);
    delay(320.0);
    delay(64.0);
    tone(tonePin, 130, 288.0);
    delay(320.0);
    delay(64.0);
    tone(tonePin, 164, 288.0);
    delay(320.0);
    delay(64.0);
    tone(tonePin, 146, 691.2);
    delay(768.0);
    tone(tonePin, 195, 288.0);
    delay(320.0);
    delay(64.0);
    tone(tonePin, 123, 288.0);
    delay(320.0);
    delay(64.0);
    tone(tonePin, 110, 1036.8);
    delay(1152.0);
    tone(tonePin, 164, 288.0);
    delay(320.0);
    delay(64.0);
    tone(tonePin, 146, 1350.0);
    delay(1500.0);
    delay(3492.0);
    tone(tonePin, 123, 288.0);
    delay(320.0);
    delay(64.0);
    tone(tonePin, 164, 288.0);
    delay(320.0);
    delay(64.0);
    tone(tonePin, 195, 288.0);
    delay(320.0);
    delay(64.0);
    tone(tonePin, 184, 1350.0);
    delay(1500.0);
    delay(6180.0);
    tone(tonePin, 195, 345.6);
    delay(384.0);
    tone(tonePin, 246, 345.6);
    delay(384.0);
    tone(tonePin, 293, 345.6);
    delay(384.0);
    tone(tonePin, 391, 345.6);
    delay(384.0);
    tone(tonePin, 369, 345.6);
    delay(384.0);
    tone(tonePin, 440, 990.0);
    delay(1100.0);
    delay(3124.0);
    tone(tonePin, 130, 345.6);
    delay(384.0);
    tone(tonePin, 164, 345.6);
    delay(384.0);
    tone(tonePin, 195, 345.6);
    delay(384.0);
    tone(tonePin, 261, 345.6);
    delay(384.0);
    tone(tonePin, 246, 345.6);
    delay(384.0);
    tone(tonePin, 293, 990.0);
    delay(1100.0);
    delay(6196.0);
    tone(tonePin, 329, 345.6);
    delay(384.0);
    tone(tonePin, 369, 345.6);
    delay(384.0);
    tone(tonePin, 391, 345.6);
    delay(384.0);
    tone(tonePin, 329, 345.6);
    delay(384.0);
    tone(tonePin, 369, 345.6);
    delay(384.0);
    tone(tonePin, 493, 1036.8);
    delay(1152.0);
    tone(tonePin, 329, 345.6);
    delay(384.0);
    tone(tonePin, 369, 345.6);
    delay(384.0);
    tone(tonePin, 391, 345.6);
    delay(384.0);
    tone(tonePin, 523, 345.6);
    delay(384.0);
    tone(tonePin, 246, 345.6);
    delay(384.0);
    tone(tonePin, 261, 345.6);
    delay(384.0);
    tone(tonePin, 293, 345.6);
    delay(384.0);
    tone(tonePin, 391, 345.6);
    delay(384.0);
    tone(tonePin, 277, 345.6);
    delay(384.0);
    tone(tonePin, 293, 345.6);
    delay(384.0);
    tone(tonePin, 329, 345.6);
    delay(384.0);
    tone(tonePin, 277, 345.6);
    delay(384.0);
    tone(tonePin, 369, 345.6);
    delay(384.0);
    tone(tonePin, 391, 345.6);
    delay(384.0);
    tone(tonePin, 440, 345.6);
    delay(384.0);
    tone(tonePin, 523, 345.6);
    delay(384.0);
    tone(tonePin, 493, 1382.4);
    delay(1536.0);
    tone(tonePin, 440, 691.2);
    delay(768.0);
    tone(tonePin, 493, 345.6);
    delay(384.0);
    tone(tonePin, 440, 345.6);
    delay(384.0);
    tone(tonePin, 391, 1382.4);
    delay(1536.0);
    tone(tonePin, 369, 691.2);
    delay(768.0);
    tone(tonePin, 391, 345.6);
    delay(384.0);
    tone(tonePin, 369, 345.6);
    delay(384.0);
    tone(tonePin, 329, 1382.4);
    delay(1536.0);
    tone(tonePin, 293, 691.2);
    delay(768.0);
    tone(tonePin, 391, 1382.4);
    delay(1536.0);
    tone(tonePin, 369, 345.6);
    delay(384.0);
    tone(tonePin, 329, 345.6);
    delay(384.0);
    tone(tonePin, 293, 1382.4);
    delay(1536.0);
    tone(tonePin, 391, 172.8);
    delay(192.0);
    tone(tonePin, 493, 172.8);
    delay(192.0);
    tone(tonePin, 587, 1350.0);
    delay(1500.0);
    delay(36.0);
    tone(tonePin, 523, 172.8);
    delay(192.0);
    tone(tonePin, 493, 172.8);
    delay(192.0);
    tone(tonePin, 523, 691.2);
    delay(768.0);
    tone(tonePin, 391, 172.8);
    delay(192.0);
    tone(tonePin, 440, 172.8);
    delay(192.0);
    tone(tonePin, 493, 1350.0);
    delay(1500.0);
    delay(36.0);
    tone(tonePin, 440, 172.8);
    delay(192.0);
    tone(tonePin, 391, 172.8);
    delay(192.0);
    tone(tonePin, 440, 691.2);
    delay(768.0);
    tone(tonePin, 391, 1382.4);
    delay(1536.0);
    tone(tonePin, 391, 172.8);
    delay(192.0);
    tone(tonePin, 440, 172.8);
    delay(192.0);
    tone(tonePin, 493, 345.6);
    delay(384.0);
    tone(tonePin, 391, 691.2);
    delay(768.0);
    tone(tonePin, 440, 172.8);
    delay(192.0);
    tone(tonePin, 493, 172.8);
    delay(192.0);
    tone(tonePin, 554, 345.6);
    delay(384.0);
    tone(tonePin, 440, 691.2);
    delay(768.0);
    tone(tonePin, 587, 1382.4);
    delay(1536.0);
    tone(tonePin, 587, 1728.0);
    delay(1920.0);
    tone(tonePin, 523, 172.8);
    delay(192.0);
    tone(tonePin, 493, 172.8);
    delay(192.0);
    tone(tonePin, 523, 691.2);
    delay(768.0);
    tone(tonePin, 493, 1728.0);
    delay(1920.0);
    tone(tonePin, 440, 172.8);
    delay(192.0);
    tone(tonePin, 391, 172.8);
    delay(192.0);
    tone(tonePin, 369, 691.2);
    delay(768.0);
    tone(tonePin, 391, 864.0);
    delay(960.0);
    tone(tonePin, 440, 172.8);
    delay(192.0);
    tone(tonePin, 493, 172.8);
    delay(192.0);
    tone(tonePin, 523, 172.8);
    delay(192.0);
    tone(tonePin, 493, 1036.8);
    delay(1152.0);
    tone(tonePin, 440, 172.8);
    delay(192.0);
    tone(tonePin, 391, 172.8);
    delay(192.0);
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
    tone(tonePin, 146, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 146, 345.6);
    delay(384.0);
    tone(tonePin, 146, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 146, 345.6);
    delay(384.0);
    tone(tonePin, 97, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 97, 1530.0);
    delay(1700.0);
    delay(3100.0);
    tone(tonePin, 220, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 220, 345.6);
    delay(384.0);
    tone(tonePin, 220, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 220, 345.6);
    delay(384.0);
    tone(tonePin, 261, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 261, 1530.0);
    delay(1700.0);
    delay(3100.0);
    tone(tonePin, 146, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 146, 345.6);
    delay(384.0);
    tone(tonePin, 146, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 146, 345.6);
    delay(384.0);
    tone(tonePin, 97, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 97, 345.6);
    delay(384.0);
    tone(tonePin, 97, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 97, 288.0);
    delay(320.0);
    delay(64.0);
    tone(tonePin, 97, 288.0);
    delay(320.0);
    delay(64.0);
    tone(tonePin, 97, 288.0);
    delay(320.0);
    delay(64.0);
    tone(tonePin, 146, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 146, 345.6);
    delay(384.0);
    tone(tonePin, 146, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 146, 345.6);
    delay(384.0);
    tone(tonePin, 97, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 97, 345.6);
    delay(384.0);
    tone(tonePin, 97, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 97, 288.0);
    delay(320.0);
    delay(64.0);
    tone(tonePin, 97, 288.0);
    delay(320.0);
    delay(64.0);
    tone(tonePin, 97, 288.0);
    delay(320.0);
    delay(64.0);
    tone(tonePin, 146, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 146, 345.6);
    delay(384.0);
    tone(tonePin, 146, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 146, 345.6);
    delay(384.0);
    tone(tonePin, 97, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 97, 345.6);
    delay(384.0);
    tone(tonePin, 97, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 97, 288.0);
    delay(320.0);
    delay(64.0);
    tone(tonePin, 97, 288.0);
    delay(320.0);
    delay(64.0);
    tone(tonePin, 97, 288.0);
    delay(320.0);
    delay(64.0);
    tone(tonePin, 146, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 146, 345.6);
    delay(384.0);
    tone(tonePin, 146, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 146, 345.6);
    delay(384.0);
    tone(tonePin, 97, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 97, 345.6);
    delay(384.0);
    tone(tonePin, 97, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 97, 288.0);
    delay(320.0);
    delay(64.0);
    tone(tonePin, 97, 288.0);
    delay(320.0);
    delay(64.0);
    tone(tonePin, 97, 288.0);
    delay(320.0);
    delay(64.0);
    tone(tonePin, 293, 691.2);
    delay(768.0);
    tone(tonePin, 391, 345.6);
    delay(384.0);
    tone(tonePin, 493, 345.6);
    delay(384.0);
    tone(tonePin, 440, 1382.4);
    delay(1536.0);
    delay(384.0);
    tone(tonePin, 246, 345.6);
    delay(384.0);
    tone(tonePin, 329, 345.6);
    delay(384.0);
    tone(tonePin, 391, 345.6);
    delay(384.0);
    tone(tonePin, 369, 1382.4);
    delay(1536.0);
    delay(384.0);
    tone(tonePin, 195, 345.6);
    delay(384.0);
    tone(tonePin, 261, 345.6);
    delay(384.0);
    tone(tonePin, 329, 345.6);
    delay(384.0);
    tone(tonePin, 293, 691.2);
    delay(768.0);
    tone(tonePin, 391, 345.6);
    delay(384.0);
    tone(tonePin, 246, 345.6);
    delay(384.0);
    tone(tonePin, 220, 1036.8);
    delay(1152.0);
    tone(tonePin, 391, 345.6);
    delay(384.0);
    tone(tonePin, 369, 691.2);
    delay(768.0);
    tone(tonePin, 440, 345.6);
    delay(384.0);
    tone(tonePin, 293, 345.6);
    delay(384.0);
    tone(tonePin, 391, 345.6);
    delay(384.0);
    tone(tonePin, 493, 345.6);
    delay(384.0);
    tone(tonePin, 587, 345.6);
    delay(384.0);
    tone(tonePin, 783, 345.6);
    delay(384.0);
    tone(tonePin, 739, 345.6);
    delay(384.0);
    tone(tonePin, 880, 345.6);
    delay(384.0);
    tone(tonePin, 587, 345.6);
    delay(384.0);
    tone(tonePin, 523, 345.6);
    delay(384.0);
    tone(tonePin, 493, 345.6);
    delay(384.0);
    tone(tonePin, 659, 345.6);
    delay(384.0);
    tone(tonePin, 493, 345.6);
    delay(384.0);
    tone(tonePin, 391, 345.6);
    delay(384.0);
    tone(tonePin, 369, 345.6);
    delay(384.0);
    tone(tonePin, 440, 345.6);
    delay(384.0);
    tone(tonePin, 369, 345.6);
    delay(384.0);
    tone(tonePin, 293, 345.6);
    delay(384.0);
    tone(tonePin, 329, 345.6);
    delay(384.0);
    tone(tonePin, 391, 345.6);
    delay(384.0);
    tone(tonePin, 261, 345.6);
    delay(384.0);
    tone(tonePin, 329, 345.6);
    delay(384.0);
    tone(tonePin, 293, 345.6);
    delay(384.0);
    tone(tonePin, 391, 345.6);
    delay(384.0);
    tone(tonePin, 246, 345.6);
    delay(384.0);
    tone(tonePin, 293, 345.6);
    delay(384.0);
    tone(tonePin, 277, 345.6);
    delay(384.0);
    tone(tonePin, 329, 345.6);
    delay(384.0);
    tone(tonePin, 220, 345.6);
    delay(384.0);
    tone(tonePin, 195, 345.6);
    delay(384.0);
    tone(tonePin, 184, 345.6);
    delay(384.0);
    tone(tonePin, 220, 345.6);
    delay(384.0);
    tone(tonePin, 146, 691.2);
    delay(768.0);
    tone(tonePin, 293, 691.2);
    delay(768.0);
    tone(tonePin, 195, 172.8);
    delay(192.0);
    tone(tonePin, 220, 172.8);
    delay(192.0);
    tone(tonePin, 246, 172.8);
    delay(192.0);
    tone(tonePin, 261, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 293, 1036.8);
    delay(1152.0);
    tone(tonePin, 195, 345.6);
    delay(384.0);
    tone(tonePin, 329, 691.2);
    delay(768.0);
    tone(tonePin, 261, 172.8);
    delay(192.0);
    tone(tonePin, 293, 172.8);
    delay(192.0);
    tone(tonePin, 329, 172.8);
    delay(192.0);
    tone(tonePin, 369, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 391, 1036.8);
    delay(1152.0);
    tone(tonePin, 195, 345.6);
    delay(384.0);
    delay(738.0);
    tone(tonePin, 261, 1.8);
    delay(2.0);
    tone(tonePin, 293, 183.6);
    delay(204.0);
    delay(16.0);
    tone(tonePin, 261, 172.8);
    delay(192.0);
    tone(tonePin, 246, 172.8);
    delay(192.0);
    tone(tonePin, 220, 172.8);
    delay(192.0);
    tone(tonePin, 246, 630.0);
    delay(700.0);
    delay(20.0);
    tone(tonePin, 261, 86.4);
    delay(96.0);
    delay(144.0);
    tone(tonePin, 246, 86.4);
    delay(96.0);
    delay(96.0);
    tone(tonePin, 220, 86.4);
    delay(96.0);
    delay(96.0);
    tone(tonePin, 195, 86.4);
    delay(96.0);
    delay(96.0);
    tone(tonePin, 220, 691.2);
    delay(768.0);
    tone(tonePin, 246, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 220, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 195, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 184, 129.6);
    delay(144.0);
    delay(48.0);
    tone(tonePin, 195, 666.0);
    delay(740.0);
    delay(28.0);
    tone(tonePin, 195, 666.0);
    delay(740.0);
    delay(28.0);
    tone(tonePin, 195, 4140.0);
    delay(4600.0);

}

void loop() {
    // Play midi
    midi();
}
