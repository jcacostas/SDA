#ifndef BMP180T
#define BMP180T

#include <entities.h>
#include <Arduino.h>
#include <SFE_BMP180.h>

class BMP180: public SFE_BMP180, public Sensor {
    public:
        BMP180(uint8_t id, String reference, String variable): SFE_BMP180(), Sensor(id, reference, variable){};
        double getMeasure();
        
};

double BMP180::getMeasure(){
    char status = this->startTemperature();//Inicio de lectura de temperatura
    if (status != 0)
    {   
        delay(status); //Pausa para que finalice la lectura
        status = this->getTemperature(measure); //Obtener la temperatura
        return measure;
    }
}

#endif