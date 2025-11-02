#include <LiquidCrystal.h>

int rs = 7, en = 8, d4 = 9, d5 = 10, d6 = 11, d7 = 12;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int dt = 1000;
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  //16 columns, 2 rows
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0, 0);
  lcd.print("Watch Me Count:");
  for (int i = 1; i <= 10; i++){
    lcd.setCursor(0, 1);
    lcd.print(i);
    delay(dt);
  }
  lcd.clear();
}
