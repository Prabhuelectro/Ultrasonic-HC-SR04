#ifndef __ULTRASONIC_H__
#define __ULTRASONIC_H__

#if ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

#define CM 1
#define INC 0

class Ultrasonic
{
	private:
		int Trig_pin;
		int Echo_pin;
		long Time_out;
		long duration,distance_cm,distance_inc;
	public:
		Ultrasonic(int triggerpin, int echopin);
		Ultrasonic(int triggerpin, int echopin, long timeout);
		long read_time();
		long distance(int scale);

};

#endif
