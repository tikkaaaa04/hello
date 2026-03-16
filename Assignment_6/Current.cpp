#include "Account.h"

double CurrentAccount::interestrate=1;
double CurrentAccount::minbalance=1000;

void CurrentAccount::acceptdata()
{
    Account::acceptdata();

    cout<<"Enter Transactions/Day: ";
    cin>>transnum;
}

void CurrentAccount::displaydata()
{
    Account::displaydata();
    cout<<"Transactions Per Day: "<<transnum<<endl;
}

bool CurrentAccount::withdraw(double amt)
{
    if(balance-amt>=minbalance)
    {
        balance-=amt;
        return true;
    }
    else
        throw "Insufficient Balance";
}

bool CurrentAccount::deposit(double amt)
{
    balance+=amt;
    return true;
}