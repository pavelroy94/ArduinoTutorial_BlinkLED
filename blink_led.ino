//Blink "LED".
//The purpose of writing this program is to blink a "LED" that is contolled via the digital pin 9.

int led = 9; //The digital pin number to which the positive wire is connect to "LED" via a resistor. The wire negative wire from the "LED" is connected to ground on the arduino.
int delayTime = 500; //This is the rate at which the "LED" will turn on and off through the arduino. The delay is mentioned in milli seconds. In this case we are adding a delay of half a second. 

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
