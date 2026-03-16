#include "park.h"

int main()
{
    char type;
    int hours;
    char choice = 'y';

    while(choice == 'y' || choice == 'Y')
    {
        try
        {
            cout << "\nEnter type of Vehicle (C for Car, T for Truck): ";
            cin >> type;

            if(type!='C' && type!='T' && type!='c' && type!='t')
                throw "Invalid Vehicle Type!";

            cout << "Enter parking hours: ";
            cin >> hours;

            Vehicle *v;

            if(type=='C' || type=='c')
                v = new Car(hours);
            else
                v = new Truck(hours);

            v->calculateCharge();   // runtime polymorphism
            delete v;
        }

        catch(const char* msg)
        {
            cout << "Error: " << msg << endl;
        }

        cout << "\nDo you want to continue? (Y/N): ";
        cin >> choice;
    }

    cout << "\nProgram finished.\n";
    return 0;
}