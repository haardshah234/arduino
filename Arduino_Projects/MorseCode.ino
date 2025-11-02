int myPin = 8;
int dit = 250;
int dat = 700;
int myDelay = 1000;
void setup() {
  // put your setup code here, to run once:
pinMode(myPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(myPin,HIGH);
delay(dit);
digitalWrite(myPin,LOW);
delay(dit);

digitalWrite(myPin,HIGH);
delay(dit);
digitalWrite(myPin,LOW);
delay(dit);

digitalWrite(myPin,HIGH);
delay(dit);
digitalWrite(myPin,LOW);
delay(dit);

digitalWrite(myPin,HIGH);
delay(dat);
digitalWrite(myPin,LOW);
delay(dat);

digitalWrite(myPin,HIGH);
delay(dat);
digitalWrite(myPin,LOW);
delay(dat);

digitalWrite(myPin,HIGH);
delay(dat);
digitalWrite(myPin,LOW);
delay(dat);

digitalWrite(myPin,HIGH);
delay(dit);
digitalWrite(myPin,LOW);
delay(dit);
digitalWrite(myPin,HIGH);
delay(dit);
digitalWrite(myPin,LOW);
delay(dit);
digitalWrite(myPin,HIGH);
delay(dit);
digitalWrite(myPin,LOW);
delay(dit);

delay(myDelay);
}
