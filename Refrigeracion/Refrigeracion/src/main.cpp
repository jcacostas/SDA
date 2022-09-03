#include <Arduino.h>
#include <SFE_BMP180.h>
#include <DynamixelSerial.h>
#include <wire.h>

//Sensor temperature_sensor = Sensor(20, 1);
//Sensor preasure_sensor = Sensor(10, 2);

long timer = millis();

void setup(){
    Serial.begin(9600);
    Dynamixel.setSerial(&Serial3);
    Dynamixel.begin(1000000, 2);

}

void loop(){
    if((millis() - timer) > 100) {
        temperature_sensor.sample();
        preasure_sensor.sample();
        timer = millis();
        turn
    }
}
