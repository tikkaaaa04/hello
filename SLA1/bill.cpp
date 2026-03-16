#include<iostream>
#include<string>
using namespace std;

float calculateBill(int units)
{
    float bill;

    if(units <= 100)
        bill = units * 5.5;

    else if(units <= 300)
        bill = (100 * 5.5) + (units - 100) * 7.25;

    else
        bill = (100 * 5.5) + (200 * 7.25) + (units - 300) * 8.75;

    if(bill < 60)
        bill = 60;

    if(bill > 750)
        bill = bill + (bill * 0.10);

    return bill;
}

void displayBill(string name, int units, float bill)
{
    cout<<"User Name : "<<name<<endl;
    cout<<"Units Consumed : "<<units<<endl;
    cout<<"Total Bill : "<<bill<<endl;
}

int main()
{
    string name;
    int units;
    float bill;

    cout<<"Enter User Name: ";
    getline(cin,name);

    cout<<"Enter Units Consumed: ";
    cin>>units;

    bill = calculateBill(units);

    displayBill(name, units, bill);

    return 0;
}