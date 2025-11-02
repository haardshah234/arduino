int dataPin = 12, latchPin = 11, clockPin = 9;
int dt = 250;
byte LEDpattern = 0x00;
byte LEDpattern2;
void setup() {
  // put your setup code here, to run once:
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  Serial.begin(9600);
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LEDpattern);
  digitalWrite(latchPin,HIGH);
  Serial.println();
  Serial.println("Enter a number: ");
  while(Serial.available()==0){}
  LEDpattern = Serial.parseInt();
  LEDpattern2 = 0xFF - LEDpattern;
}

void loop() {
  // put your main code here, to run repeatedly
  //Serial.println(LEDpattern);
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LEDpattern);
  digitalWrite(latchPin,HIGH);
  delay(dt);
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LEDpattern2);
  digitalWrite(latchPin,HIGH);
  delay(dt);
}

