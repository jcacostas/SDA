#ifndef SERVO
#define SERVO

#include <entities.h>
#include <Arduino.h>
#include <DynamixelSerial.h>

class DynamixelActuador: public DynamixelClass, public Actuator {
public:
    DynamixelActuador::DynamixelActuador(uint8_t _ID, String _Reference): DynamixelClass(),Actuator(_ID, _Reference){};
};

#endif