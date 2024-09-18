#include <Arduino.h>
#include <string.h>


#define LED 4

String buff;

void setup(){
	Serial.begin(9600);
	pinMode(LED,OUTPUT);

	Serial1.begin(9600);
}


void loop(){
	if(Serial1.available() > 0 ){
		buff = "";
		buff = Serial1.readStringUntil('\n');
		if(buff.substring(0,buff.length() - 1) == "Ativar"){
			Serial.println("Mensagem Recebida");
			
			digitalWrite(LED,HIGH);
			delay(500);
			digitalWrite(LED,LOW);
			delay(500);
			buff = "";

		}
	}

}

