#include <Arduino.h>
#define BUT_PULLUP 5

void setup(){
	Serial.begin(9600);
	pinMode(BUT_PULLUP,INPUT_PULLUP);

}

void loop(){
	delay(500);
	//Serial.println(digitalRead(BUT_PULLUP));
	if(digitalRead(BUT_PULLUP)){
	  Serial.println("Ativar");
	}
	
}
