#include <Wire.h>
#include <EasyUltrasonic.h>


EasyUltrasonic ultrasonic;
int distance;
void setup()

{
  Serial.begin(9600);
  // tells the ultrasonic what pins to use for the trigger and echo pins
  ultrasonic.attach(14,12); 
}


void loop()
{
  distance = ultrasonic.getDistanceCM();
  Serial.println(distance);
}
