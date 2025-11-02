int redPin=13;
int yellowPin=12;
int greenPin=11;
int readPin=A2;
float readVal;
void setup() {
  // put your setup code here, to run once: 
  pinMode(redPin,OUTPUT);
  pinMode(yellowPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(readPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(readPin) * (5./1023.);
  Serial.print("Voltage = ");
  Serial.println(readVal);
  delay(250);
  if (readVal <= 3.){
    digitalWrite(redPin,LOW);
    digitalWrite(yellowPin,LOW);
    digitalWrite(greenPin,HIGH);
  }
  else if (readVal>3 && readVal<4){
    digitalWrite(redPin,LOW);
    digitalWrite(yellowPin,HIGH);
    digitalWrite(greenPin,LOW);
  }
  else {
    digitalWrite(redPin,HIGH);
    digitalWrite(yellowPin,LOW);
    digitalWrite(greenPin,LOW);
  }
}
