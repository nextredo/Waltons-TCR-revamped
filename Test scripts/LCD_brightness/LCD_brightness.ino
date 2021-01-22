//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  Serial.begin(9600);
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();

  //lcd.backlight();
  //lcd.noBacklight();
  //lcd.setBacklight();

  
  lcd.setCursor(0,0);
  lcd.print("Hello, world!");
  lcd.setCursor(0,1);
  lcd.print("Ywrobot Arduino!");
  //lcd.setCursor(0,2);
  //lcd.print("Arduino LCM IIC 2004");
  //lcd.setCursor(0,3);
  //lcd.print("Power By Ec-yuan!");
}


void loop()
{
  delay(3000);
  for(int i = 0; i <= 100; i++) {
    float i_f = (float)i/100;
    lcd.setBacklight(i_f);
    Serial.print("i_OG = ");
    Serial.print(i);
    Serial.print("  I_float = ");
    Serial.print(i_f);
    Serial.print("  i = ");
    Serial.println(i/100);
    delay(45);
  }
}
