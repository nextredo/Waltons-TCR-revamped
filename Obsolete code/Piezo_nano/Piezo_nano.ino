// const int ledPin = 13;      // led connected to digital pin 13
//const int knockSensor = A6; // the piezo is connected to analog pin 0
#define knockSensor A6
const int threshold = 770;  // threshold value to decide when the detected sound is a knock or not

int sensorReading = 0;      // variable to store the value read from the sensor pin
int ledState = LOW;         // variable used to store the last LED status, to toggle the light

void setup() {
 pinMode(LED_BUILTIN, OUTPUT); // declare the ledPin as as OUTPUT
 pinMode(knockSensor, INPUT);
 Serial.begin(9600);     // use the serial port
}

void loop() {
  // read the sensor and store it in the variable sensorReading:
  sensorReading = analogRead(knockSensor);    
  
  // if the sensor reading is greater than the threshold:
  if (sensorReading >= threshold) {
    // toggle the status of the ledPin:
    ledState = !ledState;   
    // update the LED pin itself:        
    digitalWrite(LED_BUILTIN, ledState);
    // send the string "Knock!" back to the computer, followed by newline
    Serial.println("Knock!");         
  }
  delay(100);  // delay to avoid overloading the serial port buffer
}
