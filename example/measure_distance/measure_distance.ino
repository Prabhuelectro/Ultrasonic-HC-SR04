#include <Ultrasonic.h>

Ultrasonic hc_sr04(9,8); // (Trig PIN,Echo PIN)

void setup() 
{
	Serial.begin(9600);
}

void loop()
{
  Serialprint.print(hc_sr04.distance(CM)); // CM or INC
  Serial.println("cm");
  delay(300);
}
