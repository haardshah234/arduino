int redPin = 10;
int greenPin = 8;
int bluePin = 6;
int yellowPin = 4;
int myD = 1000;           
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
  digitalWrite(yellowPin,LOW);
  delay(myD);

  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
  digitalWrite(yellowPin,HIGH);
  delay(myD);

  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,HIGH);
  digitalWrite(yellowPin,LOW);
  delay(myD);
  
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,HIGH);
  digitalWrite(yellowPin,HIGH);
  delay(myD);
  
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,LOW);
  digitalWrite(yellowPin,LOW);
  delay(myD);
  
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,LOW);
  digitalWrite(yellowPin,HIGH);
  delay(myD);
  
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,HIGH);
  digitalWrite(yellowPin,LOW);
  delay(myD);
  
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,HIGH);
  digitalWrite(yellowPin,HIGH);
  delay(myD);
  
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
  digitalWrite(yellowPin,LOW);
  delay(myD);

  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
  digitalWrite(yellowPin,HIGH);
  delay(myD);

  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,HIGH);
  digitalWrite(yellowPin,LOW);
  delay(myD);
  
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,HIGH);
  digitalWrite(yellowPin,HIGH);
  delay(myD);
  
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,LOW);
  digitalWrite(yellowPin,LOW);
  delay(myD);
  
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,LOW);
  digitalWrite(yellowPin,HIGH);
  delay(myD);
  
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,HIGH);
  digitalWrite(yellowPin,LOW);
  delay(myD);
  
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,HIGH);
  digitalWrite(yellowPin,HIGH);
  delay(myD);
  
}