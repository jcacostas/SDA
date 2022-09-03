#include <Arduino.h>
#include <BMP180T/BMP180T.h>
#include <Dynamixel/Dynamixel.h>

// DynamixelActuador Dynamixel1 = DynamixelActuador(1, actuatorName);
// BMP180 temperature_sensor = BMP180(2, "BMP180", "Temperature");

//long t = millis();

void setup(){
    Serial.begin(9600);
    //Dynamixel.setSerial(&Serial3);
    // Dynamixel.begin(1000000, 2);
}

void loop(){}