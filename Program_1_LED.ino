int LedPin1=13,LedPin2=12,LedPin3=11,LedPin4=10;
void setup()
{
  pinMode(LedPin1,OUTPUT);
  pinMode(LedPin2,OUTPUT);
  pinMode(LedPin3,OUTPUT);
  pinMode(LedPin4,OUTPUT);
}
void loop()
{
  digitalWrite(LedPin1,HIGH);
  delay(300);
  digitalWrite(LedPin1,LOW);
  delay(300);
  
  digitalWrite(LedPin2,HIGH);
  delay(300);
  digitalWrite(LedPin2,LOW);
  delay(300);
  
  digitalWrite(LedPin3,HIGH);
  delay(300);
  digitalWrite(LedPin3,LOW);
  delay(300);
  
  digitalWrite(LedPin4,HIGH);
  delay(300);
  digitalWrite(LedPin4,LOW);
  delay(300);
}
