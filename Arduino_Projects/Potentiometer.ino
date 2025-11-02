int readPin = A2;
int inV = 0;
int myD = 250;
void setup() {
  // put your setup code here, to run once:
pinMode(readPin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  inV = analogRead(readPin);
  Serial.println(inV * (5./1023.));
  delay(myD);
}
