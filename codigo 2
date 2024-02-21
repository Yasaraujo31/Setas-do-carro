const int btn1 = 0;
int cond = 0;

void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(btn1, INPUT);
  
}

void loop()
{
  
  cond = digitalRead(btn1);

  if (cond == HIGH){ 
  digitalWrite(1, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  delay(700); // Wait for 2000 millisecond(s)
  
  digitalWrite(1, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  delay(700); // Wait for 2000 millisecond(s)
  
}

 if (cond == LOW){ 
  digitalWrite(1, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  delay(700); // Wait for 2000 millisecond(s)
  
  digitalWrite(1, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  delay(700); // Wait for 2000 millisecond(s)
  
}
  
  
 }
