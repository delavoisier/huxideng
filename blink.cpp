#include "Blink.h"



Blink::Blink(int pin){
 pinMode(pin,OUTPUT);
 pinNumber = pin;
}

void Blink::blink(int t){
 int a;
 for(a=0;a<=255;a++){
	analogWrite(pinNumber,a);
	delay(t);
 }
 for(a=255;a>=0;a--){
	analogWrite(pinNumber,a);
	delay(t);
 }
}