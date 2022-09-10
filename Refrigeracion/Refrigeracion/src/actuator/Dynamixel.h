#ifndef DYNAMIXEL
#define DYNAMIXEL

#include <entities.h>
#include <Arduino.h>
#include <DynamixelSerial.h>

class DynamixelActuador: public DynamixelClass, public Actuator {
public:
    DynamixelActuador(uint8_t id, String reference): DynamixelClass(), Actuator(id, reference){};
    void execute(int speed){
        this->turn(this->getId(), (speed > 0), speed);
    };
};

#endif