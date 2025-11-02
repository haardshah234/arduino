int myPin = 9;
int bright = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(myPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(myPin,bright);
}
