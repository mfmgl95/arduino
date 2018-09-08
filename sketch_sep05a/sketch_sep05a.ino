#include <SoftwareSerial.h>

int red_led = 13; 
int yellow_led = 12;
int green_led = 8;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(red_led, OUTPUT);
pinMode(yellow_led, OUTPUT);
pinMode(green_led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hola Mundo");
digitalWrite(red_led, HIGH);
digitalWrite(yellow_led, LOW);
digitalWrite(green_led, LOW);

delay(2000);

digitalWrite(red_led, LOW);
digitalWrite(yellow_led, HIGH);
digitalWrite(green_led, LOW);

delay(2000);

digitalWrite(red_led, LOW);
digitalWrite(yellow_led, LOW);
digitalWrite(green_led, HIGH);

delay(2000);
}
