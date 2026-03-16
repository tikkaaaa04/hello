#include "Car.h"

double Car::calculateCharge(double hours, const std::string& discount) {
    double charge = 100.0 + extraCharges(hours, 3.0, 30.0);
    return charge;
}

