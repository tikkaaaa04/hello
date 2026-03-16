#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
protected:
    static int receiptCount;

public:
    Vehicle() {}
    virtual ~Vehicle() {}
    
    // Pure virtual function for runtime polymorphism
    virtual double calculateCharge(double hours, const std::string& discount = "") = 0;
    
    // Inline function for extra charges
    inline double extraCharges(double hours, double fixedHours, double rate) {
        if (hours <= fixedHours) return 0.0;
        return (hours - fixedHours) * rate;
    }
    
    static int getReceiptCount() { return receiptCount; }
    static void incrementReceiptCount() { ++receiptCount; }
};

int Vehicle::receiptCount = 0;

#endif


