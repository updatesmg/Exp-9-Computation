#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>
#define DHTTYPE    DHT11     // DHT 11
#define DHTPIN 2
DHT_Unified dht(DHTPIN, DHTTYPE);
uint32_t delayMS;
 void setup() {
  Serial.begin(9600);
  dht.begin(); //creating instance of DHT library
  sensor_t sensor;
  //delayMS = sensor.min_delay / 1000;
}

void loop()
{
  sensors_event_t event; //creating an event to read data for temp & Humidity
  dht.temperature().getEvent(&event);
   Serial.print(F("Temperature: "));
  Serial.print(event.temperature);
  Serial.println(F("°C"));
  dht.humidity().getEvent(&event);
  Serial.print(F("Humidity: "));
  Serial.print(event.relative_humidity);
  Serial.println(F("%"));
delay(1000);
}

