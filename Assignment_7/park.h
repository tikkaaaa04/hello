#ifndef PARK_H
#define PARK_H

#include<iostream>
#include<string>
using namespace std;

/* Template function for validating discount code */
template <typename T>
bool validateCode(T entered, T correct)
{
    return entered == correct;
}

/* Abstract Base Class */
class Vehicle
{
protected:
    int hours;

public:
    static int receiptCount;

    Vehicle(int h);

    virtual void calculateCharge() = 0;   // Pure virtual function
};

/* Derived class Car */
class Car : public Vehicle
{
public:
    Car(int h);

    inline int extraCharge(int extraHours)
    {
        return extraHours * 30;
    }

    void calculateCharge();
};

/* Derived class Truck */
class Truck : public Vehicle
{
public:
    Truck(int h);

    inline int extraCharge(int extraHours)
    {
        return extraHours * 50;
    }

    void calculateCharge();
};

#endif