bool LED=0;
bool Button;
int ReadPin = 9;
int WritePin = 10;
int dt = 1;
int val;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ReadPin,INPUT);
  pinMode(ReadPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(ReadPin);
  //Serial.println(val);
  //Serial.println(Button);
  //Serial.println(LED);
  //delay(1000);
  if(Button==0 && val == 1){
    if(LED == 0){
      digitalWrite(WritePin, HIGH);
      LED = !LED;
    }
    else{
      digitalWrite(WritePin,LOW);
      LED = !LED;
    }
  }
  Button = val;
  delay(dt);
}
