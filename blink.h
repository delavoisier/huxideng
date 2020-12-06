

#ifndef _BLINK_H_
#define _BLINK_H_

#include <Arduino.h>

class Blink
{
public:
	Blink(int pin);
	void blink(int t);
private:
	int pinNumber;
};

#endif
