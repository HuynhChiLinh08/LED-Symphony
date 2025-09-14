 int leds[10] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; 

void setup() 
{
  for (int i = 0; i <= 9; i++) 
  {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], HIGH); 
  }
  delay(500);
}

void loop() 
{ 
  //
  for(int j = 0; j < 4; j++)
  {
    for (int i = 0; i <= 9; i++) 
    {
      digitalWrite(leds[i], HIGH);
    }
    delay(500);
    for (int i = 0; i <= 9; i++) 
    {
      digitalWrite(leds[i], LOW);
    }
    delay(500);
  }
  //
  for(int j = 0; j < 5; j++)
  {
    for (int i = 0; i <= 9; i++) 
    {
      if(i <= 4)
        digitalWrite(leds[i], HIGH);
      else 
        digitalWrite(leds[i], LOW);
    }
    delay(300);
    for (int i = 0; i <= 9; i++) 
    {
      if(i >= 5)
        digitalWrite(leds[i], HIGH);
      else 
        digitalWrite(leds[i], LOW);
    }
    delay(300);
    
  }
  //
  for (int i = 0; i <= 9; i++) 
  {
    digitalWrite(leds[i], HIGH); 
  }
  delay(300);
  for (int j = 0; j < 4; j++) 
  {
    for (int i = 0; i < 5; i++) {
      digitalWrite(leds[i], LOW);        
      digitalWrite(leds[9 - i], LOW);    
      delay(200);
    }
    for (int i = 4; i >= 0; i--) {
      digitalWrite(leds[i], HIGH);       
      digitalWrite(leds[9 - i], HIGH);   
      delay(200);
    }
  }
  //
  for (int j = 0; j < 3; j++) 
  {
    for (int i = 0; i <= 9; i++) 
    {
      digitalWrite(leds[i], HIGH); 
    }
    delay(100);
    for (int i = 0; i <= 9; i++) 
    {
      digitalWrite(leds[i], LOW);
      delay(100);
    }
    for (int i = 9; i >= 0; i--) 
    {
      digitalWrite(leds[i], HIGH);
      delay(100);
    }
   }
  //
  for (int j = 0; j < 5; j++) 
  {
    for (int i = 0; i <= 9; i++) 
    {
      if (i % 2 == 0) 
        digitalWrite(leds[i], LOW);
      else 
        digitalWrite(leds[i], HIGH);
    }
    delay(300);
    for (int i = 0; i <= 9; i++) 
    {
      if (i % 2 == 0) 
        digitalWrite(leds[i], HIGH);
      else 
        digitalWrite(leds[i], LOW);
    }
    delay(300);
  }
}
