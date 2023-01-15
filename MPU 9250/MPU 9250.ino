
// imports
#include <Wire.h>
#include <MPU9250_asukiaaa.h>
MPU9250_asukiaaa mySensor;

float aX, aY, aZ, aSqrt;
float gX, gY, gZ;

void setup()
{
  Serial.begin(9600);
  Wire.begin();
  mySensor.setWire(&Wire);
  mySensor.beginAccel();
  mySensor.beginGyro();
}

void loop()
{
  printGyro();
  printAcell();
  // Do what you want
  delay(100);
}

void printAcell()
{
  mySensor.accelUpdate();
  aX = mySensor.accelX();
  aY = mySensor.accelY();
  aZ = mySensor.accelZ();
  aSqrt = mySensor.accelSqrt();
  // Serial.print("x: ");
  Serial.print(aX);
  Serial.print(",");
  // Serial.print("y: ");
  Serial.print(aY);
  Serial.print(",");
  // Serial.print("z: ");
  Serial.print(aZ);
  Serial.println(",");
  // Serial.print("Sqrt: ");
  // Serial.println(aSqrt);
}

void printGyro()
{
  mySensor.gyroUpdate();
  gX = mySensor.gyroX();
  gY = mySensor.gyroY();
  gZ = mySensor.gyroZ();
  // Do what you want
  // Serial.print("x: ");
  Serial.print(gX);
  Serial.print(",");
  // Serial.print("y: ");
  Serial.print(gY);
  Serial.print(",");
  // Serial.print("z: ");
  Serial.print(gZ);
  // Serial.print(",,|,,");
}