#define en 8
#define stepX 2
#define stepY 3
#define stepZ 4
#define dirX  5
#define dirY 6
#define dirZ 7


void setup()
{
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
  
}


void loop()
{
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  
  while(true) 
  {
    digitalWrite(4, HIGH);
    delay(1);
    digitalWrite(4, LOW);
    delay(1);
  }
  
  
  
}

