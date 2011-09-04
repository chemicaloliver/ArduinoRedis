#include <SPI.h>
#include <Ethernet.h>
#include <redis.h>

byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
byte ip[] = { 192, 168, 1, 10 };			    // this is the ip within my lan
byte gateway[] = { 192, 168, 1, 254 };			// neccessary to get access to the internet via your router
byte subnet[] = { 255, 255, 255, 0 };

byte server[] = { 192, 168, 1, 2 };		   // Redis Server

ArduinoRedisClient redis(server, 6379);

void setup()
{
  Ethernet.begin(mac, ip, gateway, subnet);
  Serial.begin(9600);

  delay(1000);
  Serial.println("connecting...");
  redis.connect();
}

void loop()
{
  delay(1000);
} 
