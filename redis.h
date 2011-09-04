/**
 * redis.h
 * 
 * Arduino redis client library
 * 
 */

#include <WProgram.h>;
#include <Client.h>

class ArduinoRedisClient {

private:
    Client _client;
    
public:
    ArduinoRedisClient(uint8_t *, uint16_t);
    bool connect();
    
    bool set(char *, char *);
    bool publish(char *, char *);
    
    bool connected();
    void disconnect();
};