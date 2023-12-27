//Blink Led.
//The purpose of writing this program is to blink a Led that is contolled via the digital pin 9.

int led = 9; //The digital pin number to which the positive wire is coonect to led via a resistor. The wire negative wire from the led is connected to ground on the arduino.
int delayTime = 500; //This is the rate at which the led will turn on and off through the arduino. The delay is mentioned in milli seconds. In this case we are adding a delay of half a second. 

void setup()
{
  pinMode(led,OUTPUT);
}

void loop()
{
  digitalWrite(led,HIGH);
  delay(delayTime);
  digitalWrite(led,LOW);
  delay(delayTime);
}