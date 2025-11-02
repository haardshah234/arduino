#include <LiquidCrystal.h>

int rs = 7, en = 8, d4 = 9, d5 = 10, d6 = 11, d7 = 12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
float num1,num2;
String op,trash;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Enter 1st number");
  while(Serial.available()==0){}
  num1 = Serial.parseFloat();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Enter operator");
  lcd.setCursor(0,1);
  lcd.print("(+,-,*,/)");
  while(Serial.available()==0){}
  op = Serial.readString();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Enter 2nd number");
  while(Serial.available()==0){}
  num2 = Serial.parseFloat();
  if (op == "+"){
    printAns();
    lcd.print(num1+num2);
  }
  else if (op == "-"){
    printAns();
    lcd.print(num1-num2);
  }
  else if (op == "*"){  
    printAns();
    lcd.print(num1*num2);
  }
  else if (op == "/"){
    printAns();
    lcd.print(num1/num2);
  }
  else{
    lcd.clear();
    lcd.print("Invalid Input!");
  }
  while(Serial.available()==0){}
  trash = Serial.readString();
}

void printAns(){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(num1);
      lcd.print(" ");
      lcd.print(op);
      lcd.print(" ");
      lcd.print(num2);
      lcd.print(" ");
      lcd.print("=");
      lcd.setCursor(0,1);
      return;
}