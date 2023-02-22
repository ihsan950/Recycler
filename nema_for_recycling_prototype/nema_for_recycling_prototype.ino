#define potmeterPin A0

int steppin = 4;
int dirpin = 3;
int stepdelay;
void setup(){
 pinMode(steppin,OUTPUT);
 pinMode(dirpin,OUTPUT);
  digitalWrite(dirpin,HIGH);// direction pin either LOW or HIGH to move in either direction.
}
void loop(){
  int val = analogRead(A0);
  stepdelay=map(val,0,1023,1,20000);
  digitalWrite(steppin,HIGH);
  delayMicroseconds(stepdelay);
  digitalWrite(steppin,LOW);
  delayMicroseconds(stepdelay);
}
