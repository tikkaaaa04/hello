#include<iostream>
#include<vector>
#include "Vehicle.h"

using namespace std;

int main()
{
    vector<Vehicle*> vehicles;

    int n;

    cout<<"Enter number of vehicles: ";
    cin>>n;

    ofstream fout("vehicle.dat",ios::binary);

    for(int i=0;i<n;i++)
    {
        char type;

        cout<<"\nEnter type of vehicle (C for Car, B for Bike): ";
        cin>>type;

        char reg[20],model[30],man[30];
        int year;

        cout<<"Enter Registration Number: ";
        cin>>reg;

        if(strlen(reg)==0)
            throw runtime_error("Registration number cannot be empty");

        cout<<"Enter Model Name: ";
        cin>>model;

        cout<<"Enter Manufacturer: ";
        cin>>man;

        cout<<"Enter Year: ";
        cin>>year;

        if(!validateYear(year))
            throw runtime_error("Invalid Year");

        if(type=='C' || type=='c')
        {
            char fuel[20];

            cout<<"Enter Fuel Type: ";
            cin>>fuel;

            Vehicle *v = new Car(reg,model,man,year,fuel);

            v->writeToFile(fout);

            vehicles.push_back(v);
        }

        else if(type=='B' || type=='b')
        {
            char engine[20];

            cout<<"Enter Engine Capacity: ";
            cin>>engine;

            Vehicle *v = new Bike(reg,model,man,year,engine);

            v->writeToFile(fout);

            vehicles.push_back(v);
        }

        else
        {
            cout<<"Invalid vehicle type\n";
            i--;
        }
    }

    fout.close();

    ifstream fin("vehicle.dat",ios::binary);

    cout<<"\nVehicle Records From File\n\n";

    while(fin.peek()!=EOF)
    {
        char type;

        fin.read((char*)&type,sizeof(type));

        Vehicle *v;

        if(type=='C')
        {
            v = new Car();
            v->readFromFile(fin);
        }
        else
        {
            v = new Bike();
            v->readFromFile(fin);
        }

        v->displayInfo();
    }

    fin.close();

    cout<<"\nTotal Vehicles stored: "<<Vehicle::getCount()<<endl;

    return 0;
}