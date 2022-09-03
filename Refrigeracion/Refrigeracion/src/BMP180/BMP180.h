#ifndef POTENTIOMETER
#define POTENTIOMETER

#include <entities.h>
#include <Arduino.h>
#include <SFE_BMP180.h>

class BMP180: public SFE_BMP180, public Sensor {
    public:
        BMP180::BMP180(uint8_t _ID, String _Reference, String _Variable):Sensor(_ID, _Reference, _Variable){};
        float getMeasure();
};

float BMP180::getMeasure(){
    char status = startTemperature();//Inicio de lectura de temperatura
    if (status != 0)
    {   
        delay(status); //Pausa para que finalice la lectura
        status = getTemperature(Measure); //Obtener la temperatura
        return Measure;
    }

#endif