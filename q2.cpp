#include <iostream>
using namespace std;

// Abstract Class
class SmartDevice {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual void getStatus() = 0;
};

// Derived Class: LightBulb
class LightBulb : public SmartDevice {
private:
    bool isOn;
    int brightness; // 0-100%

public:
    LightBulb(int b) {
        isOn = false;
        brightness = b;
    }

    void turnOn() {
        isOn = true;
        cout << "LightBulb turned ON. Brightness: " << brightness << "%" << endl;
    }

    void turnOff() {
        isOn = false;
        cout << "LightBulb turned OFF." << endl;
    }

    void getStatus() {
        cout << "LightBulb status: " << (isOn ? "ON" : "OFF") 
             << ", Brightness: " << brightness << "%" << endl;
    }
};

// Derived Class: Thermostat
class Thermostat : public SmartDevice {
private:
    bool isOn;
    double temperature;

public:
    Thermostat(double temp) {
        isOn = false;
        temperature = temp;
    }

    void turnOn() {
        isOn = true;
        cout << "Thermostat turned ON. Temperature set to " << temperature << "°C" << endl;
    }

    void turnOff() {
        isOn = false;
        cout << "Thermostat turned OFF." << endl;
    }

    void getStatus() {
        cout << "Thermostat status: " << (isOn ? "ON" : "OFF") 
             << ", Temperature: " << temperature << "°C" << endl;
    }
};

int main() {
    SmartDevice* devices[2];

    LightBulb bulb(75);
    Thermostat thermo(22.5);

    devices[0] = &bulb;
    devices[1] = &thermo;

    // Turn on all devices
    for (int i = 0; i < 2; i++) {
        devices[i]->turnOn();
    }

    cout << "-------------------" << endl;

    // Display status
    for (int i = 0; i < 2; i++) {
        devices[i]->getStatus();
    }

    cout << "-------------------" << endl;

    // Turn off all devices
    for (int i = 0; i < 2; i++) {
        devices[i]->turnOff();
    }

    return 0;
}
