#include "Account.h"

int Account::count=0;

string Account::generateId(string f,string l)
{
    count++;
    return f.substr(0,2)+l.substr(0,2)+to_string(count);
}

void Account::acceptdata()
{
    cout<<"Enter First Name: ";
    cin>>fname;

    cout<<"Enter Last Name: ";
    cin>>lname;

    cout<<"Enter Mobile: ";
    cin>>mobile;

    cout<<"Enter Email: ";
    cin>>email;

    cout<<"Enter Pin: ";
    cin>>pin;

    cout<<"Enter Balance: ";
    cin>>balance;

    id=generateId(fname,lname);
}

void Account::displaydata()
{
    cout<<"\nID: "<<id;
    cout<<"\nName: "<<fname<<" "<<lname;
    cout<<"\nMobile: "<<mobile;
    cout<<"\nEmail: "<<email;
    cout<<"\nBalance: "<<balance<<endl;
}

double Account::getBalance()
{
    return balance;
}

void Account::changePin()
{
    int newpin;
    cout<<"Enter New Pin: ";
    cin>>newpin;
    pin=newpin;
}