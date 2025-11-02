void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(10,HIGH);
delay(5000);
digitalWrite(10,LOW);
digitalWrite(8,HIGH);
delay(10000);
digitalWrite(8,LOW);
digitalWrite(6,HIGH);
delay(15000);
digitalWrite(6,LOW);
}