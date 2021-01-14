
#define UP 14 //A0
#define DOWN 15 //A1
#define LEFT 16 //A2
#define RIGHT 17 //A3
#define CENTRE 3 //D3

void setup() {
  Serial.begin(9600);

  pinMode(UP, INPUT_PULLUP);
  pinMode(DOWN, INPUT_PULLUP);
  pinMode(LEFT, INPUT_PULLUP);
  pinMode(RIGHT, INPUT_PULLUP);
  pinMode(CENTRE, INPUT_PULLUP);

  Serial.println("initialised");
}

void loop() {
  if(digitalRead(UP) == LOW) {
    Serial.println("up");
  }
  if(digitalRead(DOWN) == LOW) {
    Serial.println("down");
  }
  if(digitalRead(LEFT) == LOW) {
    Serial.println("left");
  }
  if(digitalRead(RIGHT) == LOW) {
    Serial.println("right");
  }
  if(digitalRead(CENTRE) == LOW) {
    Serial.println("centre");
  }
  delay(5);
}
