#include "Account.h"

void Share::accept()
{
    cout<<"Enter Share Name: ";
    cin>>sname;

    cout<<"Enter Number Of Shares: ";
    cin>>numshares;

    cout<<"Enter Purchase Date: ";
    cin>>pdate;

    cout<<"Enter Purchase Price: ";
    cin>>pprice;

    cout<<"Enter Selling Date: ";
    cin>>sdate;

    cout<<"Enter Selling Price: ";
    cin>>sprice;
}

void Share::display()
{
    cout<<"\nShare Name: "<<sname;
    cout<<"\nShares: "<<numshares;
    cout<<"\nPurchase Date: "<<pdate;
    cout<<"\nPurchase Price: "<<pprice;
    cout<<"\nSelling Date: "<<sdate;
    cout<<"\nSelling Price: "<<sprice<<endl;
}