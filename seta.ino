// C++ code
//
const int btn1 = 0;
int cond = 0;

void setup()
{
  pinMode (5, OUTPUT);//direita1
  pinMode (2, OUTPUT);//esquerda1
  pinMode (4, INPUT);//direita2
  pinMode (3, INPUT);//esquerda2
  pinMode(btn1, INPUT);
  
  
}

void loop()
{
  
  cond = digitalRead(btn1);
  
  if (cond == HIGH )
  
  {
    
  digitalWrite(5,HIGH);//direita1
  digitalWrite(2,LOW);//esquerda1
  digitalWrite(4,HIGH);//direita2
  digitalWrite(3,LOW);//esquerda2
  delay(4000); // Wait for 1000 millisecond(s)
     
  digitalWrite(5,LOW);//direita1
  digitalWrite(2,HIGH);//esquerda1
  digitalWrite(4,LOW);//direita2
  digitalWrite(3,HIGH);//esquerda2
  delay(4000);} // Wait for 1000 millisecond(s)
     
} 
