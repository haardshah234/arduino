int readPin1 =10;
int readPin2 = 9;
int writePin = 11;
int buzzPin = 6;
int brightness = 0;
int val1,val2;
int bzt = 50;
void setup() {
  // put your setup code here, to run once:
  pinMode(readPin1,INPUT);
  pinMode(readPin2,INPUT);
  pinMode(writePin,OUTPUT);
  pinMode(buzzPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val1 = digitalRead(readPin1);
  val2 = digitalRead(readPin2);
  //Serial.println(val1);
  //Serial.println(val2);
  //delay(5000);
  if(val1 == 0){
    if(brightness>=85){
      brightness = brightness - 85;
    }
    else{
      //beep
      analogWrite(buzzPin,127);
      delay(bzt);
      analogWrite(buzzPin,0);
    }
  }
  if(val2 == 0){
    if(brightness<=192){
      brightness = brightness + 85;
    }
    else{
      //beep
      analogWrite(buzzPin,127);
      delay(bzt);
      analogWrite(buzzPin,0);
    }
  }
  //Serial.println(brightness);
  analogWrite(writePin,brightness);
  delay(150);
}
