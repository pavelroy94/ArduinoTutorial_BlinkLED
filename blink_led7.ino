//Blink Led.

int led[6] = {2,3,4,5,6,7};
// 2 is The digital pin number to control the first "LED"
// 3 is The digital pin mumber to control the second "LED" 
// 4 is The digital pin mumber to control the third "LED" 
// 5 is The digital pin mumber to control the fourth "LED" 
// 6 is The digital pin mumber to control the fifth "LED"
// 7 is The digital pin mumber to control the sixth "LED"

int delayTime = 500; //This is the rate at which the leds will turn on and off through the arduino. The delay is mentioned in milli seconds.

void setup()
{
  for (int i=0; i<=5; i++)
   {
    pinMode(led[i],OUTPUT);
   }
}

void loop()
{ 
  for (int i=0; i<=5; i++)
  {
    digitalWrite(led[i],HIGH);
    delay(delayTime);
    digitalWrite(led[i],LOW);
  }
 delay(delayTime);
  
  for (int i=5; i>=0; i--)
  {
    digitalWrite(led[i],HIGH);
    delay(delayTime);
    digitalWrite(led[i],LOW);
  }
 delay(delayTime);
} 
