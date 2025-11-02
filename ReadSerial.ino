int myNumber;
int redPin = 13;
int rD = 750;
String msg="Please enter a number: ";
void setup() {
  // put your setup code here, to run once:
  pinMode(redPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available()==0){
  }
  myNumber = Serial.parseInt();
  for (int i = 1; i <= myNumber; i++){
    digitalWrite(redPin,HIGH);
    delay(rD);
    digitalWrite(redPin,LOW);
    delay(rD);
  }
}
