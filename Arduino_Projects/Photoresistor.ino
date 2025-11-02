int lpin = A3;
int rpin = 10, gpin = 9;
int val;
void setup() {
  // put your setup code here, to run once:
  pinMode(lpin,INPUT);
  Serial.begin(9600);
  pinMode(rpin,OUTPUT);
  pinMode(gpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(lpin);
  Serial.println(val);
  if (val > 750){
    digitalWrite(gpin,HIGH);
    digitalWrite(rpin,LOW);
  }
  else{
    digitalWrite(gpin,LOW);
    digitalWrite(rpin,HIGH);
  }
}
