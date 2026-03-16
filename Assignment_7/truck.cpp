#include "park.h"

Truck::Truck(int h) : Vehicle(h) {}

void Truck::calculateCharge()
{
    int total = 200;
    int extra = 0;
    string code;

    if(hours > 2)
    {
        extra = extraCharge(hours - 2);
        total += extra;
    }

    cout << "Enter discount code if available (or press Enter to skip): ";
    cin.ignore();
    getline(cin, code);

    if(validateCode(code, string("TRUCK50")))
    {
        total -= 50;
    }

    cout << "Vehicle type = Truck" << endl;
    cout << "Extra charge = Rs. " << extra << endl;
    cout << "Total Charge after discount = Rs. " << total << endl;

    receiptCount++;
    cout << "Receipts generated so far: " << receiptCount << endl;
}