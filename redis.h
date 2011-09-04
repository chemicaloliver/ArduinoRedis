/**
 * redis.h
 * 
 * Arduino redis client library
 * 
 */

#include <WProgram.h>;

class ArduinoRedisClient {

private:
    
public:
    ArduinoRedisClient();
    bool begin();
};

extern Client client; //the network client