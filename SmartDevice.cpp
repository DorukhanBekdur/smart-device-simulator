#include "SmartDevice.h"
#include <iostream>
using namespace std;

SmartDevice::SmartDevice(string deviceName) {
    name = deviceName;
    isOn = false;
}

void SmartDevice::turnOn() {
    isOn = true;
    cout << name << " has been turned ON." << endl;
}

void SmartDevice::turnOff() {
    isOn = false;
    cout << name << " has been turned OFF." << endl;
}

void SmartDevice::showStatus() {
    cout << name << " is currently " << (isOn ? "ON" : "OFF") << "." << endl;
}

string SmartDevice::getName() {
    return name;
}
