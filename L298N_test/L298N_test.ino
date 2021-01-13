
#define IN1 0 //GPIO0 / D3
#define IN2 2 //GPIO2 / D4
#define ENA 15 //GPIO15 / D8

int lmao;

void setup() {
  delay(128);
  Serial.begin(9600);
  Serial.println("hi1");
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
  Serial.println("hi2");

  delay(50);

  //digitalWrite(IN1, HIGH);
  //digitalWrite(IN2, LOW);
  //digitalWrite(ENA, HIGH); // this works for enabling the motor
  //analogWrite(ENA, 255); //PWM signal for enable pin, 0-255
  Serial.println("hi3");
  
  delay(300);
}

void loop() {
  digitalWrite(ENA, HIGH);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  delay(2000); // the above 3 lines specify the correct rotation direction for my current setup
  // in other words, it makes the motor spin so the clock ticks forward not backward

//  digitalWrite(ENA, HIGH);
//  digitalWrite(IN1, LOW);
//  digitalWrite(IN2, HIGH);
//  delay(2000);
//
//  digitalWrite(ENA, LOW);
//  digitalWrite(IN1, HIGH);
//  digitalWrite(IN2, LOW);
//  delay(2000);

  digitalWrite(ENA, LOW);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  delay(2000);
}


//  for (lmao = 0; lmao <= 200; lmao += 1) {
//    analogWrite(ENA, lmao);
//    Serial.println(lmao);
//    delay(55);
//  }
//  for (lmao = 200; lmao >= 0; lmao -= 1) {
//    analogWrite(ENA, lmao);
//    Serial.println(lmao);
//    delay(55);
//  }
