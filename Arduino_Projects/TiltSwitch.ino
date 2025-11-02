int tPin =  2, rPin = 8, gPin = 9;
bool tVal;
void setup() {
  // put your setup code here, to run once:
  pinMode(tPin,INPUT);
  pinMode(rPin,OUTPUT);
  pinMode(gPin,OUTPUT);
  digitalWrite(tPin,HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  tVal = digitalRead(tPin);
  Serial.println(tVal);
  if(tVal == 0){
    digitalWrite(gPin,HIGH);
    digitalWrite(rPin,LOW);
  }
  else{
    digitalWrite(gPin,LOW);
    digitalWrite(rPin,HIGH);
  }
}
