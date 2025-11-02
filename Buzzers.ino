int bzPin = 9;
int pmPin = A2;
int readVal;
int deltime2 = 500;
void setup() {
  // put your setup code here, to run once:
  pinMode(bzPin, OUTPUT);
  pinMode(pmPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(pmPin);
  Serial.println(readVal);
  delay(deltime2);
  if (readVal > 1000){
    analogWrite(bzPin,255);
    delay(deltime2);
    analogWrite(bzPin,0);
  }
}
