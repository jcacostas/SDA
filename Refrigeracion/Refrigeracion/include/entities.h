#ifndef ENTITIES
#define ENTITIES

class Device {
    private:
        uint8_t ID;
        String Reference;
    public:
        Device::Device(uint8_t _ID, String _Reference){
            uint8_t ID = _ID;
            String Reference = _Reference;
        }
        void ShowID();
        void ShowReference();
};
void Device::ShowID(){
    printf("ID: ",ID);
}
void Device::ShowReference(){
    printf("Reference: ",Reference);
}

class Sensor : public Device {
    private:
        String Variable;
    protected:
        float Measure;
    public:
        Sensor::Sensor(uint8_t _ID, String _Reference, String _Variable): Device(_ID, _Reference){
            String Variable = _Variable;
        }
        virtual float getMeasure();
        String getVariable();
};

String Sensor::getVariable(){
    return Variable;
};

class Actuator : public Device {
    public:
        Actuator::Actuator(uint8_t _ID, String _Reference): Device(_ID, _Reference){}
        virtual float getOutput();
};

#endif