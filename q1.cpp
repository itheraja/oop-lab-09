#include <iostream>
using namespace std;

// Abstract Class
class Vehicle {
protected:
    string model;
    double rate;

public:
    Vehicle(string m, double r) {
        model = m;
        rate = r;
    }

    virtual double getDailyRate() = 0;
    virtual void displayDetails() = 0;
};

// Derived Class: Car
class Car : public Vehicle {
public:
    Car(string m, double r) : Vehicle(m, r) {}

    double getDailyRate() {
        return rate;
    }

    void displayDetails() {
        cout << "Car Model: " << model << endl;
        cout << "Rate per day: " << rate << endl;
    }
};

// Derived Class: Bike
class Bike : public Vehicle {
public:
    Bike(string m, double r) : Vehicle(m, r) {}

    double getDailyRate() {
        return rate;
    }

    void displayDetails() {
        cout << "Bike Model: " << model << endl;
        cout << "Rate per day: " << rate << endl;
    }
};

int main() {
    Vehicle* vehicles[2];

    Car c1("Toyota Corolla", 5000);
    Bike b1("Honda 125", 1000);

    vehicles[0] = &c1;
    vehicles[1] = &b1;

    for (int i = 0; i < 2; i++) {
        vehicles[i]->displayDetails();
        cout << "Daily Rate: " << vehicles[i]->getDailyRate() << endl;
        cout << "-------------------" << endl;
    }

    return 0;
}
