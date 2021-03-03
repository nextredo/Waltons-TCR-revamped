#include <SPI.h>
#include "SD.h"
#define SD_ChipSelectPin 4
//const int chipSelect = 4; // CS pin connected to D4 on the nano
#include "TMRpcm.h"
#include "SPI.h"

TMRpcm tmrpcm;

void setup(){
  tmrpcm.speakerPin = 10; // spkr connected to D10
  Serial.begin(9600);
  if (!SD.begin(SD_ChipSelectPin)) {
    Serial.println("SD fail");
    return;
  }
  
  tmrpcm.setVolume(6);
  tmrpcm.play("term.wav");
}

void loop(){
  delay(1);
}
