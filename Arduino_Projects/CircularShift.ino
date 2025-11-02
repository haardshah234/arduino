int dataPin = 12, latchPin = 11, clockPin = 9, pb1Pin = 5, pb2Pin = 4;
bool pb1Old=1,pb1New,pb2Old=1,pb2New,one;
byte LEDpattern = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(pb1Pin, INPUT);
  digitalWrite(pb1Pin,HIGH);
  pinMode(pb2Pin, INPUT);
  digitalWrite(pb2Pin,HIGH);
  Serial.begin(9600);
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LEDpattern);
  digitalWrite(latchPin,HIGH);
  Serial.println();
  Serial.println("Enter a number: ");
  while(Serial.available()==0){}
  LEDpattern = Serial.parseInt();
}

void loop() {
  // put your main code here, to run repeatedly
  //Serial.println(LEDpattern);
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LEDpattern);
  digitalWrite(latchPin,HIGH);
  
  pb1New = digitalRead(pb1Pin);
  pb2New = digitalRead(pb2Pin);
  /*Serial.print(pb1New);
  Serial.print("  ");
  Serial.println(pb2New);
  */
  if(pb1Old == 1 && pb1New == 0 ){
    //i.e, onPress pb1
    //Serial.println("PB1 Pressed.");
    LEDpattern = (LEDpattern * 2) % 255;
    //Serial.println(LEDpattern);
  }
  
  if(pb2Old == 1 && pb2New == 0){
    //i.e, onPress pb2
    if(LEDpattern%2) one = 1;
    else one = 0;
    LEDpattern = (int(LEDpattern / 2));
    if(one) LEDpattern = LEDpattern + 128;
  }
  if(pb1Old!=pb1New){
    pb1Old = pb1New;  
  }
  if(pb2Old!=pb2New){
    pb2Old = pb2New;
  }

  //Serial.print(pb1Old);
  //Serial.print("  ");
  //Serial.println(pb1New);
}

