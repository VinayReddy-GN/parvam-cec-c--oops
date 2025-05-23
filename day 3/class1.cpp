#include <iostream>
using namespace std;

class Car {
    public:
    string brand, model, variant, fuel_type;
    int year;
    float price;

    void start() {
        cout << model << " started!" << endl;
    }
    void park() {
        cout << model << " parked!" << endl;
    }
    void stop() {
        cout << model << " stopped!" << endl;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Variant: " << variant << endl;
        cout << "Fuel Type: " << fuel_type << endl;
        cout << "Launch Year: " << year << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Car c1;
    c1.brand = "Toyota";
    c1.model = "Innova";
    c1.variant = "6 Seater";
    c1.fuel_type = "Diesel";
    c1.year = 2025;
    c1.price = 100000;
    
    c1.start();
    c1.park();
    c1.stop();
    c1.display();

    return 0;
}