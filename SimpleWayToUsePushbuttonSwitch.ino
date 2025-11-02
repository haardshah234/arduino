int bPin = 2;
bool bVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(bPin,INPUT);
  digitalWrite(bPin,HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  bVal = digitalRead(bPin);
  Serial.println(bVal);
}
