#include "Account.h"

double SavingAccount::interestrate=4;
double SavingAccount::minbalance=20000;

void SavingAccount::acceptdata()
{
    Account::acceptdata();

    cout<<"Enter Cheque Book Number: ";
    cin>>chequebknum;
}

void SavingAccount::displaydata()
{
    Account::displaydata();
    cout<<"ChequeBook Number: "<<chequebknum<<endl;
}

bool SavingAccount::withdraw(double amt)
{
    if(balance-amt>=minbalance)
    {
        balance-=amt;
        return true;
    }
    else
        throw "Insufficient Balance";
}

bool SavingAccount::deposit(double amt)
{
    balance+=amt;
    return true;
}