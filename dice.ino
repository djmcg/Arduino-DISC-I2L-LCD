
#include <Wire.h> // Library for I2C communication
#include <LiquidCrystal_I2C.h> // Library for LCD

LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 20, 2); // Change to (0x27,16,2) for 16x2 LCD.

int btn;
int los; 
  

void setup() {
  // Initiate the LCD:
  lcd.init();
  lcd.backlight();
  pinMode(6, INPUT_PULLUP);
  lcd.setCursor(0, 0);
  lcd.print("Nacisnij");
  lcd.setCursor(4, 1);
  lcd.print("Przycisk");
  delay(2000);
 
}

void loop() {
  btn = digitalRead(6);
  delay(20);
  
  if (!btn == HIGH) 
    {
     lcd.clear();
     los = random (1,7);
     lcd.setCursor(0, 0);
     lcd.print("TWOJA LICZBA :");
     lcd.setCursor(2, 1);
     lcd.print(los);
     delay(1000);
    }
  
}
