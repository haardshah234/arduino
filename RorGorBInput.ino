int rPin=9,gPin=10,bPin=11;
String choice;
String msg = "Pick a color from Red,Green and Blue:";
String err = "Incorrect Choice! Try again.";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(rPin,OUTPUT);
  pinMode(gPin,OUTPUT);
  pinMode(bPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println();
  Serial.println(msg);
  while(Serial.available()==0){}
  choice = Serial.readString();
  choice.trim();
  choice.toLowerCase();
  if (choice == "red"){
    digitalWrite(rPin, HIGH);
    digitalWrite(gPin, LOW);
    digitalWrite(bPin, LOW);
  }
  else if (choice == "green"){
    digitalWrite(rPin, LOW);
    digitalWrite(gPin, HIGH);
    digitalWrite(bPin, LOW);
  }
  else if (choice == "blue"){
    digitalWrite(rPin, LOW);
    digitalWrite(gPin, LOW);
    digitalWrite(bPin, HIGH);
  }
  else{
    Serial.println(err);
    digitalWrite(rPin, LOW);
    digitalWrite(gPin, LOW);
    digitalWrite(bPin, LOW);
  }
}
