int myPin = A2;
int redPin = 8;
float readVal;
int myD = 250;
void setup() {
  // put your setup code here, to run once:
pinMode(myPin,INPUT);
pinMode(redPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(myPin) * (5./1023.);
  Serial.print("Voltage = ");
  Serial.println(readVal);
  delay(myD);
  if (readVal > 4.)
  {
    Serial.println("Warning!");
    digitalWrite(redPin, HIGH);
    delay(myD);
    digitalWrite(redPin,LOW);
    delay(myD);
  }
}
