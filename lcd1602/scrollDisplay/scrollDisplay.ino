#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12); // init pins

void setup() {
  lcd.begin(16, 2);
  lcd.print("layer 5: a stream of conciousness flows like a river through the rapid expanses of the mindscape");
}

void loop() {
  lcd.scrollDisplayLeft();
  delay(300);
}