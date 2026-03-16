#include<iostream>
#include"Time.h"
using namespace std;

int main(){
Time t1, t2;

    cout << "Enter time for T1:" << endl;
    cin >> t1;

    cout << "Enter time for T2:" << endl;
    cin >> t2;

    cout << "\nT1: " << t1 << endl;
    cout << "T2: " << t2 << endl;

    Time sum = t1 + t2;
    Time diff = t1 - t2;

    cout << "\nT1 + T2 = " << sum << endl;
    cout << "T1 - T2 = " << diff << endl;
    

    return 0;
};