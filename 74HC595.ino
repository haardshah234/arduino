int latchPin = 11, clockPin = 9, dataPin = 12;
int dt = 250;
byte LED1s = 0xAA;
byte LED2s = 0x55;

void setup() {
  // put your setup code here, to run once:
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LED1s);
  digitalWrite(latchPin,HIGH);
  delay(dt);
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LED2s);
  digitalWrite(latchPin,HIGH);
  delay(dt);
}
