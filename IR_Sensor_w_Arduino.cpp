void setup()
{ 
  pinMode(3,INPUT);
  Serial.begin(9600);
}
void loop()
{
  if (digitalRead(3)== LOW)
  {
    Serial.println("Object infront");
    
    delay(100);
  }
  else 
  {
    
    Serial.println("No object");
    delay(100);
    
  }
  
}
