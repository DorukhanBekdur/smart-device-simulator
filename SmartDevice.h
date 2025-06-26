#ifndef SMARTDEVICE_H
#define SMARTDEVICE_H

#include <string>

class SmartDevice {
    protected:
        std::string name;
        bool isOn;
    public:
        SmartDevice(std::string deviceName);
        virtual void turnOn();
        virtual void turnOff();
        virtual void showStatus();
        std::string getName();
};

#endif