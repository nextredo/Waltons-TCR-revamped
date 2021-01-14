
#define LED 5 //D5

int pos = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  
  Serial.println("initialised");
}

void loop() {
  for (pos = 0; pos <= 255; pos += 1) {
    analogWrite(LED, pos);
    Serial.println(pos);
    delay(55);
  }
  for (pos = 255; pos >= 0; pos -= 1) {
    analogWrite(LED, pos);
    Serial.println(pos);
    delay(55);
  }
  delay(150);
}
