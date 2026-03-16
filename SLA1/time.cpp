#include <iostream>
using namespace std;

class Time {
private:
    int hour, minute, second;

public:
    void getTime() {
        cout << "Enter hours: ";
        cin >> hour;
        cout << "Enter minutes: ";
        cin >> minute;
        cout << "Enter seconds: ";
        cin >> second;
    }

    void addHours(int h) {
        hour += h;
    }

    void addMinutes(int m) {
        minute += m;
        hour += minute / 60;   // convert extra minutes to hours
        minute = minute % 60;
    }

    void addSeconds(int s) {
        second += s;
        minute += second / 60; // convert extra seconds to minutes
        second = second % 60;

        hour += minute / 60;   // convert extra minutes to hours
        minute = minute % 60;
    }

    void displayTime() {
        cout << "Updated Time: " << hour << " : " << minute << " : " << second << endl;
    }
};

int main() {
    Time t;
    int choice, value;

    t.getTime();

    cout << "\n1. Add Hours\n2. Add Minutes\n3. Add Seconds\n";
    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter value: ";
    cin >> value;

    if(choice == 1)
        t.addHours(value);
    else if(choice == 2)
        t.addMinutes(value);
    else if(choice == 3)
        t.addSeconds(value);
    else
        cout << "Invalid choice";

    t.displayTime();

    return 0;
}