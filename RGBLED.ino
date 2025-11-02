int rpin = 6, gpin = 9, bpin = 10;
String color;
void setup() {
  // put your setup code here, to run once:
  pinMode(rpin,OUTPUT);
  pinMode(gpin,OUTPUT);
  pinMode(bpin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println();
  Serial.println("Enter a color: ");
  while(Serial.available()==0){}
  color = Serial.readString();
  color.trim();
  color.toLowerCase();
  if (color == "red") {
    digitalWrite(rpin,HIGH);
    digitalWrite(gpin,LOW);
    digitalWrite(bpin,LOW);
  }
  else if (color == "green"){
    digitalWrite(rpin,LOW);
    digitalWrite(gpin,HIGH);
    digitalWrite(bpin,LOW);
  }
  else if (color == "blue"){
    digitalWrite(rpin,LOW);
    digitalWrite(gpin,LOW);
    digitalWrite(bpin,HIGH);
  }
  else if (color == "white"){
    digitalWrite(rpin,HIGH);
    digitalWrite(gpin,HIGH);
    digitalWrite(bpin,HIGH);
  }
  else if (color == "cyan"){
    analogWrite(rpin,0);
    analogWrite(gpin,255);
    analogWrite(bpin,255);
  }
  else if (color == "magenta"){
    analogWrite(rpin,255);
    analogWrite(gpin,0);
    analogWrite(bpin,255);
  }
  else if (color == "yellow"){
    analogWrite(rpin,255);
    analogWrite(gpin,180);
    analogWrite(bpin,0);
  }
  else if (color == "orange"){
    analogWrite(rpin,255);
    analogWrite(gpin,63);
    analogWrite(bpin,0);
  }
  else{
    digitalWrite(rpin,LOW);
    digitalWrite(gpin,LOW);
    digitalWrite(bpin,LOW);
    Serial.println("Incorrect choice! Try again.");
  }
}
