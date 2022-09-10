#include <Arduino.h>
#include <sensor/BMP180T.h>
#include <actuator/Dynamixel.h>

DynamixelActuador Dynamixel1 = DynamixelActuador(1, "DynamixelMotor");
BMP180 temperature_sensor = BMP180(2, "BMP180", "Temperature");

unsigned long temp = millis();

void setup()
{
    Serial.begin(9600);
    if (temperature_sensor.begin()){
        Serial.println("BMP180 iniciado correctamenten");
    }
    else{
        Serial.println("Error al iniciar el BMP180");
        while(1); // bucle infinito
    }
}

    //Dynamixel1.setSerial(&Serial3);
    //Dynamixel1.begin(1000000, 2);
    //Serial.print(Dynamixel1);

void loop()
{
    if ((millis()-temp)>=3000){
        double var=temperature_sensor.getMeasure();
    }
}