#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car() {}
    double calculateCharge(double hours, const std::string& discount = "") override;
};

#endif

