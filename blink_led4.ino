//Blink Led.

int led[4] = {2,3,4,5};
// 7 is The digital pin number to control the green (aka first "LED")
// 9 is The digital pin mumber to control the orange (aka second "LED") 

int delayTime = 500; //This is the rate at which the leds will turn on and off through the arduino. The delay is mentioned in milli seconds.

void setup()
{
  for (int i=0; i<=3; i++)
   {
    pinMode(led[i],OUTPUT);
   }
}

void loop()
{
   digitalWrite(led[0],HIGH);
   digitalWrite(led[1],LOW);
   digitalWrite(led[2],LOW);
   digitalWrite(led[3],LOW);
  delay(delayTime);
   
   digitalWrite(led[0],LOW);
   digitalWrite(led[1],HIGH);
   digitalWrite(led[2],LOW);
   digitalWrite(led[3],LOW);
  delay(delayTime);
  
   digitalWrite(led[0],LOW);
   digitalWrite(led[1],LOW);
   digitalWrite(led[2],HIGH);
   digitalWrite(led[3],LOW);
  delay(delayTime);
  
   digitalWrite(led[0],LOW);
   digitalWrite(led[1],LOW);
   digitalWrite(led[2],LOW);
   digitalWrite(led[3],HIGH);
  delay(delayTime);
}
