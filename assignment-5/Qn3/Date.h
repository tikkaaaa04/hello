#include <iostream>
using namespace std;

class Date {
private:
    int dd;
    int mm;
    int yyyy;
    static const int daysInMonth[13];

public:
    Date();
    Date(int dd, int mm, int yyyy);
    ~Date();

    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);
    int getDay();
    int getMonth();
    int getYear();

    bool isLeapYear(int y) const;
    int toDays() const;

    bool operator==(const Date &d) const;
    bool operator!=(const Date &d) const;
    Date operator+(const Date &d) const;
    Date operator-(const Date &d) const;

    friend istream& operator>>(istream &in, Date &d);
    friend ostream& operator<<(ostream &out, const Date &d);
};