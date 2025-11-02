#include <Servo.h>

int servopin = 9;
int angle;
int readPin = A2;
Servo myServo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(servopin);
  pinMode(readPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  angle = analogRead(readPin) * (180./1023.);;
  myServo.write(angle);
}
