// C++ code
//
int Green=3;
 int Yellow=2;
  int Red=1;
int Green2=13;
int Yellow2=12;
  int Red2=11;
  
void setup()
{
  pinMode(Green,OUTPUT);
  pinMode(Yellow,OUTPUT);
  pinMode(Red,OUTPUT);
  pinMode(Green2,OUTPUT);
  pinMode(Yellow2,OUTPUT);
  pinMode(Red2,OUTPUT);
}

void loop()
{
digitalWrite(Green,HIGH);
digitalWrite(Red2,HIGH);
  delay(9000);

digitalWrite(Green,LOW);
digitalWrite(Red2,LOW);

digitalWrite(Yellow2,HIGH);
digitalWrite(Yellow,HIGH);
  delay(1000);
  
digitalWrite(Yellow,LOW);
digitalWrite(Yellow2,LOW);
  
  digitalWrite(Green2,HIGH);
digitalWrite(Red,HIGH);
  delay(9000);

digitalWrite(Green2,LOW);
digitalWrite(Red,LOW);

digitalWrite(Yellow2,HIGH);
digitalWrite(Yellow,HIGH);
  delay(1000);
  
digitalWrite(Yellow2,LOW);
digitalWrite(Yellow,LOW);
}