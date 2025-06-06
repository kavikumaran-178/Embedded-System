/*
LED Blinking Using Arduino  UNO
By KAVIKUMARAN
ELECTRICAL AND ELECTRNICS ENGINEERING
*/

int LED = 13; // Digital Pin 13 in Arduino UNO

void setup(){
pinMode(LED, OUTPUT); // To Set D13 pin as "OUTPUT"
}

void loop(){
digitalWrite(LED,HIGH); // To Turn ON the LED
delay(1000); // The LED will ON for 1Sec
digitalWrite(LED,LOW); // To Turn OFF the LED
delay(1000); // The LED will OFF for 1Sec
}

// Loop() will continously executed and the LED is look Blinking
  
