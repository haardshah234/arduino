String name;
String msg = "What is your name? ";
String msg2 = "Hello ";
String msg3 = ", Welcome to Arduino!";
int redPin = 13;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println();
  Serial.println(msg);
  while(Serial.available()==0){

  }
  name = Serial.readString();
  Serial.print(msg2);
  Serial.print(name);
  Serial.print(msg3);
}
