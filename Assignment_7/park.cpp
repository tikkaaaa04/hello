#include "park.h"

int Vehicle::receiptCount = 0;

Vehicle::Vehicle(int h)
{
    if(h <= 0)
        throw "Parking hours must be positive!";
    hours = h;
}