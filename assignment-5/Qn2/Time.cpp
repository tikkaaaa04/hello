#include<iostream>
#include"Time.h"
using namespace std;

    Time::Time(){
        hours = 0;
        min = 0;
        sec = 0;
    }

    Time::Time(int hr, int mn, int sc){
        this->hours = hr;
        this->min = mn;
        this->sec = sc;
    }

    Time::Time(const Time &t){
        this->hours = t.hours;
        this->min = t.min;
        this->sec = t.sec;
    }
    void Time::setHr(int hr){
        this->hours = hr;
    }

    void Time::setMin(int mn){
        this->min = mn;
    }    
    void Time::setSec(int sc){
        this->sec = sc;
    }

    int Time::getHr(){
        return hours;
    }

    int Time::getMin(){
        return min;
    }

    int Time::getSec(){
        return sec;
    }

    int Time::toSec(int hours, int min, int sec){
        return hours * 3600 + min * 60 + sec;
    }

    Time Time::operator-(const Time &t){
        int diff = abs(toSec(this->hours, this->min, this->sec) - toSec(t.hours,t.min,t.sec));

        int hrs = diff/3600;
        diff %= 3600;
        int mins = diff/60;
        int secs = diff%60; 
        return Time(hrs,mins,secs);
    }

    Time Time::operator+(const Time &t) {
    int total = toSec(this->hours, this->min, this->sec)
              + toSec(t.hours, t.min, t.sec);

    int hrs  = total / 3600;
    total   %= 3600;
    int mins = total / 60;
    int secs = total % 60;

    return Time(hrs, mins, secs);
}

    void Time::normalize() {
    min  += sec / 60;
    sec  %= 60;
    hours += min / 60;
    min   %= 60;
    }

    void Time::displayData() {
        cout << hours << "h : " << min << "m : " << sec << "s" << endl;
    }

    istream& operator>>(istream &in, Time &t){
    cout << "Enter hours: ";
    in >> t.hours;
    cout << "Enter minutes: ";
    in >> t.min;
    cout << "Enter seconds: ";
    in >> t.sec;
    t.normalize();
    return in;
}

    ostream& operator<<(ostream &out, const Time &t){
    out << t.hours << "h : " << t.min << "m : " << t.sec << "s";
    return out;
}