#include "Truck.h"
#include <string>

using namespace std;

double Truck::calculateCharge(double hours, const std::string& discount) {
    double charge = 200.0 + extraCharges(hours, 2.0, 50.0);
    if (discount == "TRUCK50") {
        charge -= 50.0;
    }
    if (charge < 0) charge = 0.0;
    return charge;
}

