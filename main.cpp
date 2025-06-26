#include <iostream>
#include <vector>
#include <memory>
#include "SmartDevice.h"
using namespace std;

void showMenu() {
    cout << "\n===== Smart Device Control Panel =====" << endl;
    cout << "1. List Devices" << endl;
    cout << "2. Turn On a Device" << endl;
    cout << "3. Turn Off a Device" << endl;
    cout << "4. Show Device Status" << endl;
    cout << "0. Exit\n" << endl;
    cout << "Your choice: ";
}

int main() {
    vector<shared_ptr<SmartDevice>> devices;
    devices.push_back(make_shared<SmartDevice>("Smart TV"));
    devices.push_back(make_shared<SmartDevice>("Air Conditioner"));
    devices.push_back(make_shared<SmartDevice>("Washing Machine"));

    int choice;
    while (true) {
        showMenu();
        cin >> choice;

        if (choice == 0) break;

        int index;
        switch (choice) {
            case 1:
                cout << "\nDevices:" << endl;
                for (size_t i = 0; i < devices.size(); i++) {
                    cout << i + 1 << ". " << devices[i]->getName() << endl;
                }
                break;
            case 2:
                cout << "Which device would you like to turn ON? (number): ";
                cin >> index;
                if (index > 0 && index <= devices.size())
                    devices[index - 1]->turnOn();
                break;
            case 3:
                cout << "Which device would you like to turn OFF? (number): ";
                cin >> index;
                if (index > 0 && index <= devices.size())
                    devices[index - 1]->turnOff();
                break;
            case 4:
                cout << "Which device's status would you like to check? (number): ";
                cin >> index;
                if (index > 0 && index <= devices.size())
                    devices[index - 1]->showStatus();
                break;
            default:
                cout << "Invalid selection!" << endl;
        }
    }

    cout << "\nExiting the program..." << endl;
    return 0;
}
