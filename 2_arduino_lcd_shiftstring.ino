#include <LiquidCrystal.h>

const int RS = 12;
const int EN = 11;
const int D5 = 5;
const int D4 = 4;
const int D3 = 3;
const int D2 = 2;

LiquidCrystal lcd(RS, EN, D5, D4, D3, D2);

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(5, 0);
  lcd.print("HELLO");
}

void loop() {

}







