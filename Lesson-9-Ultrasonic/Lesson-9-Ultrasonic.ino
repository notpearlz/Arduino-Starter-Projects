//Include libraries
#include "SR04.h"

//Specify pins for communicating with sensor
int trig_pin = 12;
int echo_pin = 11;

int ledPin = 8;

//Get an instance of SR04 object
SR04 sensor = SR04(echo_pin, trig_pin);


//variable for distance measurement
long distance;



void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:


  distance = sensor.Distance();
  Serial.println(distance);
  if(distance < 20){
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);

  }
  delay(200);
}
