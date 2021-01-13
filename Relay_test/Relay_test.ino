void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7, HIGH);
  Serial.println("H");
  delay(550);
  
  //digitalWrite(7, LOW);
  Serial.println("L");
  delay(550);
}
