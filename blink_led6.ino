//Blink Led.

int led[4] = {2,3,4,5};
// 2 is The digital pin number to control the red (aka first "LED")
// 3 is The digital pin mumber to control the green (aka second "LED") 
// 4 is The digital pin mumber to control the orange (aka third "LED") 
// 5 is The digital pin mumber to control the blue (aka fourth "LED") 


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
  for (int i=3; i>=0; i--)
  {
    digitalWrite(led[i],HIGH);
    delay(delayTime);
    digitalWrite(led[i],LOW);
  }
}
