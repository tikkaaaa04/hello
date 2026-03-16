#include "park.h"

Car::Car(int h) : Vehicle(h) {}

void Car::calculateCharge()
{
    int total = 100;
    int extra = 0;

    if(hours > 3)
    {
        extra = extraCharge(hours - 3);
        total += extra;
    }

    cout << "Vehicle type = Car" << endl;
    cout << "Extra charge = Rs. " << extra << endl;
    cout << "Total Parking Charge = Rs. " << total << endl;

    receiptCount++;
    cout << "Receipts generated so far: " << receiptCount << endl;
}