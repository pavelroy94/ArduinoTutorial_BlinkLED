//Blink Led.

int green = 7; //The digital pin number to control the green (aka first "LED")
int orange = 9; //The digital pin mumber to control the orange (aka second "LED") 
int delayTime = 500; //This is the rate at which the leds will turn on and off through the arduino. The delay is mentioned in milli seconds.

void setup()
{
  pinMode(green,OUTPUT);
  pinMode(orange,OUTPUT);
}

void loop()
{
  digitalWrite(green,HIGH);
  digitalWrite(orange,LOW);
  delay(delayTime);
  digitalWrite(green,LOW);
  digitalWrite(orange,HIGH);
  delay(delayTime);
}
