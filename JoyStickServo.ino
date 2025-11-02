#include <Servo.h>
Servo sv1, sv2;
int xPin = A0, yPin = A1, sPin = 3, sv1Pin = 10, sv2Pin = 9, bzPin = 13;
int xVal,yVal;
bool sVal;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(xPin,INPUT);
  pinMode(yPin,INPUT);
  pinMode(sPin,INPUT);
  pinMode(sv1Pin,OUTPUT);
  pinMode(sv2Pin,OUTPUT);
  pinMode(bzPin,OUTPUT);
  digitalWrite(sPin,HIGH);
  sv1.attach(sv1Pin);
  sv2.attach(sv2Pin);
}

void loop() {
  // put your main code here, to run repeatedly:
  xVal = analogRead(xPin) * (180./1023.);
  yVal = analogRead(yPin) * (180./1023.);
  sVal = digitalRead(sPin);

  sv1.write(xVal);
  sv2.write(yVal);
  
  if (sVal == 0){
    digitalWrite(bzPin,HIGH);
    delay(300);
    digitalWrite(bzPin,LOW);
  }
  Serial.print("X = ");
  Serial.print(xVal);
  Serial.print(" Y = ");
  Serial.print(yVal);
  Serial.print(" S = ");
  Serial.println(sVal);

}
