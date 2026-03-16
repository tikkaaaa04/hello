#include <iostream>
#include <string>
#include <stdexcept>
#include <iomanip>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

// Template function to validate discount code
template <typename T>
bool validateDiscount(const T& code) {
    return code == "TRUCK50";
}

int main() {
    Vehicle::incrementReceiptCount = 0;  // Reset counter

    try {
        int type;
        cout << "Vehicle Type (1=Car, 2=Truck): ";
        cin >> type;

        double hours;
        cout << "Parking Hours: ";
        cin >> hours;
        if (hours <= 0) throw invalid_argument("Parking hours must be positive!");

        string discount;
        cout << "Discount Code (or press Enter for none): ";
        cin.ignore();
        getline(cin, discount);

        Vehicle* vehicle = nullptr;
        if (type == 1) {
            vehicle = new Car();
        } else if (type == 2) {
            vehicle = new Truck();
        } else {
            cout << "Invalid type!" << endl;
            return 1;
        }

        // Runtime polymorphism
        double charge = vehicle->calculateCharge(hours, discount);
        Vehicle::incrementReceiptCount();

cout << fixed << setprecision(2);
        cout << "\n=== Parking Receipt ===" << endl;
        cout << "Type: " << (type==1 ? "Car" : "Truck") << endl;
        cout << "Hours: " << hours << endl;
        cout << "Discount: " << (discount.empty() ? "None" : discount) << endl;
        cout << "Charge: Rs. " << charge << endl;
        cout << "Total Receipts Generated: " << Vehicle::getReceiptCount() << endl;

        delete vehicle;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }

    return 0;
}

