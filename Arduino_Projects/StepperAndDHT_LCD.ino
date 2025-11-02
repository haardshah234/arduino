#include <Stepper.h>
#include <LiquidCrystal.h>
#include <DHT.h>
#define Type DHT11


int SensePin = 2;
int rs = 7, en = 8, d4 = 9, d5 = 10, d6 = 11, d7 = 12;
int dt = 2000;
DHT ht(SensePin, Type);
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

int spR = 2048;
int motSpeed = 10;
//spR means steps per Revolution. This is rated on the body of the motor itself.
Stepper myStepper(spR,A1,A3,A2,A4);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myStepper.setSpeed(motSpeed);
  ht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  myStepper.step(spR);
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
  spR = -spR;
}
