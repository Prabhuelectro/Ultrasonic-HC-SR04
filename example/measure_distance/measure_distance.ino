#include <Ultrasonic.h>

Ultrasonic hc(9,8); // (Trig PIN,Echo PIN)

void setup() 
{
	Serial.begin(9600);
}

void loop()
{
  Serialprint.print(hc.distance(CM)); // CM or INC
  Serial.println("cm");
  delay(300);
}
