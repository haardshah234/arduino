#include <LiquidCrystal.h>
#include <DHT.h>
#define Type DHT11

int SensePin = 2;
int rs = 7, en = 8, d4 = 9, d5 = 10, d6 = 11, d7 = 12;
int dt = 3000;
DHT ht(SensePin, Type);
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup() {
  // put your setup code here, to run once:
  ht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,0);
  lcd.print("Humidity: ");
  lcd.print(ht.readHumidity());
  lcd.print("%");
  delay(dt);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Temp: ");
  lcd.print(ht.readTemperature());
  lcd.print("C ");
  delay(dt);
  lcd.clear();
}
