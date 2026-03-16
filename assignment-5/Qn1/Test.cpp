#include<iostream>
#include "Services.h"

using namespace std;

int main(){

    int choice;
    do{
        cout<<"\n----- MENU -----\n";
        cout<<"1. Enter Student Data\n";
        cout<<"2. Search Student\n";
        cout<<"3. Display All Students\n";
        cout<<"4. Exit\n";
        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice){

            case 1:
                Services::acceptData();
                break;

            case 2:
                Services::searchData();
                break;

            case 3:
                Services::displayData();
                break;

            case 4:
                cout<<"\nExiting...\n";
                break;

            default:
                cout<<"Invalid Choice\n";
        }

    }while(choice != 4);

    return 0;
}