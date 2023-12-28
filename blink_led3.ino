//Blink Led.

int led[4] = {2,3,4,5};
// 2 is The digital pin number to control the red (aka first "LED")
// 3 is The digital pin mumber to control the green (aka second "LED") 
// 4 is The digital pin mumber to control the orange (aka third "LED") 
// 5 is The digital pin mumber to control the blue (aka fourth "LED") 

int delayTime = 500; //This is the rate at which the "LEDs" will turn on and off. The delay is mentioned in milli seconds.

void setup()
{
  pinMode(led[0],OUTPUT);
  pinMode(led[1],OUTPUT);
  pinMode(led[2],OUTPUT);
  pinMode(led[3],OUTPUT);
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
