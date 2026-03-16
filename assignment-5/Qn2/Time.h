#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int min;
    int sec;
public:
    Time();
    Time(int hours, int min, int sec);
    Time(const Time &t);
    void setHr(int hr);
    void setMin(int mn);
    void setSec(int sc);
    int getHr();
    int getMin();
    int getSec();
    int toSec(int hours, int min, int sec);

    Time operator-(const Time &t);
    Time operator+(const Time &t);
    void normalize();
    void displayData();
    friend istream& operator>>(istream &in, Time &t);
    friend ostream& operator<<(ostream &out, const Time &t);
};


