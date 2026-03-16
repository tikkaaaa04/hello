#include "Account.h"

int main()
{
    SavingAccount s;
    CurrentAccount c;
    DematAccount d;

    cout<<"\n---Saving Account---\n";
    s.acceptdata();
    s.deposit(5000);
    s.displaydata();

    cout<<"\n---Current Account---\n";
    c.acceptdata();
    c.deposit(2000);
    c.displaydata();

    cout<<"\n---Demat Account---\n";
    d.acceptdata();
    d.deposit(10000);
    d.buyStock();
    d.displaydata();

    return 0;
}