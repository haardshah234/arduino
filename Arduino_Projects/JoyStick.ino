int xPin = A0, yPin = A1, sPin = 2;
int xVal,yVal;
int sVal;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(xPin,INPUT);
  pinMode(yPin,INPUT);
  pinMode(sPin,INPUT);
  digitalWrite(sPin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);
  sVal = digitalRead(sPin);
  delay(200);
  Serial.print("X = ");
  Serial.print(xVal);
  Serial.print(" Y = ");
  Serial.print(yVal);
  Serial.print(" S = ");
  Serial.println(sVal);
}
