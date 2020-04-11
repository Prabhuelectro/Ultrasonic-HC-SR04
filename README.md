###Ultrasonic-HC-SR04

##Library for interfacing the HC-SR04

HC-SR04 Ultrasonic ranging module provides 2cm - 400cm non-contact measurement function,The ranging accuracy can reach to 3mm.The modules includes ultrasonic transmitters, receiver and control circuit.

<p align="center">
<img width="450" height="350" src="https://raw.githubusercontent.com/Prabhuelectro/Ultrasonic-HC-SR04/master/image/HC-SR04%20Ultrasonic%20Range%20Measurement%20Module.jpg">
</p>

<h2>Interfacing the HC-SR04 with Arduino Uno</h2>

<p align="center">
<img width="650" height="450" src="https://raw.githubusercontent.com/Prabhuelectro/Ultrasonic-HC-SR04/master/image/HCSR04-with-arduino.png">
</p>

``` C++
#include <Ultrsonic.h>

Ultrsonic hc_sr04(12,11); //Triger_pin,Echo_pin

void setup() 
{
	Serial.begin(9600);
}

void loop()
{
  Serialprint.print(hc_sr04.distance(CM)); // CM or INC
  Serial.println("cm");
  delay(300);
}```
