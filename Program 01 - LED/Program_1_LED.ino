int LedPin1=13,LedPin2=12,LedPin3=11,LedPin4=10;
void setup()
{
  pinMode(LedPin1,OUTPUT);
  pinMode(LedPin2,OUTPUT);
  pinMode(LedPin3,OUTPUT);
  pinMode(LedPin4,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(LedPin1,HIGH);
  Serial.println("LED 1 is ON");
  delay(500);
  digitalWrite(LedPin1,LOW);
  Serial.println("LED 1 is OFF");
  delay(500);
  
  digitalWrite(LedPin2,HIGH);
  Serial.println("LED 2 is ON");
  delay(500);
  digitalWrite(LedPin2,LOW);
  Serial.println("LED 2 is OFF");
  delay(500);
  
  digitalWrite(LedPin3,HIGH);
  Serial.println("LED 3 is ON");
  delay(500);
  digitalWrite(LedPin3,LOW);
  Serial.println("LED 3 is OFF");
  delay(500);
  
  digitalWrite(LedPin4,HIGH);
  Serial.println("LED 4 is ON");
  delay(500);
  digitalWrite(LedPin4,LOW);
  Serial.println("LED 4 is OFF");
  delay(500);
}
