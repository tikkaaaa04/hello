#include <iostream>
#include "Date.h"
using namespace std;

const int Date::daysInMonth[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

Date::Date() {
    dd = 1;
    mm = 1;
    yyyy = 2000;
}

Date::Date(int d, int m, int y) {
    dd = d;
    mm = m;
    yyyy = y;
}

Date::~Date() {}

void Date::setDay(int d)   { 
    dd = d; 
}
void Date::setMonth(int m) { 
    mm = m; 
}
void Date::setYear(int y)  { 
    yyyy = y; 
}
int  Date::getDay()        { 
    return dd; 
}
int  Date::getMonth()      { 
    return mm; 
}
int  Date::getYear()       { 
    return yyyy; 
}

bool Date::isLeapYear(int y) const {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int Date::toDays() const {
    int total = yyyy * 365 + dd;
    for (int i = 1; i < mm; i++)
        total += daysInMonth[i];
    total += (yyyy / 4) - (yyyy / 100) + (yyyy / 400);
    if (mm <= 2) total--;
    return total;
}

bool Date::operator==(const Date &d) const {
    return this->toDays() == d.toDays();
}

bool Date::operator!=(const Date &d) const {
    return this->toDays() != d.toDays();
}

Date Date::operator+(const Date &d) const {
    int totalDays = this->toDays() + d.toDays();
    int y = 1;
    while (true) {
        int daysInYear = isLeapYear(y) ? 366 : 365;
        if (totalDays <= daysInYear) break;
        totalDays -= daysInYear;
        y++;
    }
    int m = 1;
    while (m <= 12) {
        int dim = (m == 2 && isLeapYear(y)) ? 29 : daysInMonth[m];
        if (totalDays <= dim) break;
        totalDays -= dim;
        m++;
    }

    return Date(totalDays, m, y);
}

Date Date::operator-(const Date &d) const {
    int totalDays = abs(this->toDays() - d.toDays());
    if (totalDays == 0) return Date(1, 1, 0);
    int y = 0;
    while (true) {
        int daysInYear = isLeapYear(y) ? 366 : 365;
        if (totalDays <= daysInYear) break;
        totalDays -= daysInYear;
        y++;
    }
    int m = 1;
    while (m <= 12) {
        int dim = (m == 2 && isLeapYear(y)) ? 29 : daysInMonth[m];
        if (totalDays <= dim) break;
        totalDays -= dim;
        m++;
    }

    return Date(totalDays, m, y);
}

istream& operator>>(istream &in, Date &d) {
    cout << "Enter day: ";
    in >> d.dd;
    cout << "Enter month: ";
    in >> d.mm;
    cout << "Enter year: ";
    in >> d.yyyy;
    return in;
}

ostream& operator<<(ostream &out, const Date &d) {
    out << d.dd << "/" << d.mm << "/" << d.yyyy;
    return out;
}