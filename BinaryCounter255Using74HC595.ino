int latchPin = 11, clockPin = 9, dataPin = 12;
int dt = 500;
byte LEDpattern = 0x00;

void setup() {
  // put your setup code here, to run once:
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,MSBFIRST,LEDpattern);
  digitalWrite(latchPin,HIGH);
  delay(dt);
  LEDpattern = LEDpattern + 1;
}
