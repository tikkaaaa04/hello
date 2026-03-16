#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
public:
    Truck() {}
    double calculateCharge(double hours, const std::string& discount = "") override;
};

#endif

