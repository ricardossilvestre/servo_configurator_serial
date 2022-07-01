#include <Arduino.h>
#include "Servo.h"

Servo myservo;
int servo_position = 1500;

void setup() {
// write your initialization code here
	Serial.begin(9600);
	pinMode(13, OUTPUT);
	digitalWrite(13, HIGH);
	myservo.attach(9);
}

void loop() {
// write your code here
	while(!Serial.available()){;}
	servo_position = Serial.parseInt();
	Serial.println(servo_position);
	myservo.write(servo_position);
}