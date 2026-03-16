#include <iostream>
#include "Date.h"
using namespace std;

int main() {
    Date d1, d2;

    cout << "Enter Date 1:" << endl;
    cin >> d1;

    cout << "Enter Date 2:" << endl;
    cin >> d2;

    cout << "\nDate 1: " << d1 << endl;
    cout << "Date 2: " << d2 << endl;

    cout << "\nD1 == D2: " << (d1 == d2 ? "true" : "false") << endl;
    cout << "D1 != D2: " << (d1 != d2 ? "true" : "false") << endl;

    Date sum  = d1 + d2;
    Date diff = d1 - d2;

    cout << "\nD1 + D2 = " << sum  << endl;
    cout << "D1 - D2 = " << diff << endl;

    return 0;
}
