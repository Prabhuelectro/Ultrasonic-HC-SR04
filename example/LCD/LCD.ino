#include <Ultrasonic.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 

Ultrasonic hc_sr04(9,8); // (Trig PIN,Echo PIN)

void setup() 
{
	lcd.begin(16, 2);
}

void loop()
{
	lcd.clear();
	lcd.setCursor(0, 0);
	lcd.print(hc_sr04.Ranging(CM)); // CM or INC
	lcd.print("cm");
	delay(100);
} 
