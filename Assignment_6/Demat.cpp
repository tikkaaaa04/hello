#include "Account.h"

DematAccount::DematAccount()
{
    countShare=0;
}

bool DematAccount::withdraw(double amt)
{
    if(balance>=amt)
    {
        balance-=amt;
        return true;
    }
    else
        throw "Insufficient Balance";
}

bool DematAccount::deposit(double amt)
{
    balance+=amt;
    return true;
}

void DematAccount::buyStock()
{
    sarr[countShare].accept();
    countShare++;
}

void DematAccount::sellStock()
{
    cout<<"Stock Sold"<<endl;
}

void DematAccount::displaydata()
{
    Account::displaydata();

    for(int i=0;i<countShare;i++)
        sarr[i].display();
}