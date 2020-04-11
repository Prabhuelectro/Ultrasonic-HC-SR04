#include "Ultrasonic.h"

#if ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

Ultrasonic::Ultrasonic(int triggerpin, int echopin)
{
	pinMode(triggerpin,OUTPUT);
	pinMode(echopin,INPUT);
	Trig_pin=triggerpin,;
	Echo_pin=echopin;
	Time_out=3000;  // 3000 µs = 50cm // 30000 µs = 5 m 
}

Ultrasonic::Ultrasonic(int triggerpin, int echopin, long Time_out)
{
	pinMode(triggerpin,OUTPUT);
	pinMode(echopin,INPUT);

	Trig_pin=triggerpin;
	Echo_pin=echopin;
	Time_out=Time_out;
}

long Ultrasonic::read_time()
{
	digitalWrite(Trig_pin, LOW);
	delayMicroseconds(2);

	digitalWrite(Trig_pin, HIGH);
	delayMicroseconds(10);

	digitalWrite(Trig_pin, LOW);
	duration = pulseIn(Echo_pin,HIGH,Time_out);
	if(duration == 0)
	{
		duration = Time_out;
	}
	return duration;
}

long Ultrasonic::distance(int scale)
{
	read_time();
	if (scale)
	{
		distance_cm = duration /29 / 2 ;
		return distance_cm;
	}
	else
	{
		distance_inc = duration / 74 / 2;
		return distance_inc;
	}
}
