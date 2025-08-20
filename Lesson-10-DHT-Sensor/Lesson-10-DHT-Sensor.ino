#include "DHT.h"


// Arduino pin connected to DHTdata pin
#define DHTPIN 2

// Type of DHT sensor
#define DHTTYPE DHT11

//Initialize DHT sensor
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Humidity and Temperature");

  //Start the sensor.
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:

  delay(2000);

  //read humidity
  float h = dht.readHumidity();

  // read temp as celsius (the default)

  float t = dht.readTemperature();
  
  //send data to serial monitor
  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print("& Temperature: ");
  Serial.print(t);
  Serial.println("*C");
}
