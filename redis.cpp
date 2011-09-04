/**
 * redis.cpp
 * 
 * Arduino redis client library
 * 
 */

#include <redis.h>
#include <Client.h>


ArduinoRedisClient::ArduinoRedisClient(uint8_t *ip, uint16_t port) : _client(ip,port) 
{
    
}

bool ArduinoRedisClient::connect()
{
    _client.connect();
}

/**
 * Set a key value pair
 * 
 * @param 
 * @param 
 * @return 
 */

bool ArduinoRedisClient::set(char* key, char* value)
{

}

/**
 * Publish a message to a pub/sub topic
 * 
 * @param char* topic
 * @param char* message
 * @return bool send status
 */
bool ArduinoRedisClient::publish(char* topic, char* message)
{

}

/**
 * Disconnect from redis
 * 
 */

void ArduinoRedisClient::disconnect()
{
    _client.println("$4");
    _client.println("quit");
}

bool ArduinoRedisClient::connected()
{
    bool rc = (bool)_client.connected();
    if (!rc) _client.stop();
    return rc;  
}
//
//
