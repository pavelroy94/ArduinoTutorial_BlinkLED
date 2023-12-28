//Blink Led.

int led[2] = {7,9};
// 7 is The digital pin number to control the green (aka first "LED")
// 9 is The digital pin mumber to control the orange (aka second "LED") 

int delayTime = 500; //This is the rate at which the leds will turn on and off through the arduino. The delay is mentioned in milli seconds.

void setup()
{
  pinMode(led[0],OUTPUT);
  pinMode(led[1],OUTPUT);
}

void loop()
{
  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],LOW);
  delay(delayTime);
  digitalWrite(led[0],LOW);
  digitalWrite(led[1],HIGH);
  delay(delayTime);
}
