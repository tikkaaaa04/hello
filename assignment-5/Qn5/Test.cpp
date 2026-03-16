#include<iostream>
#include "Services.h"
using namespace std;

int main(){

    int choice;

    do{
        cout << "\n----- Player Management -----\n";
        cout << "1. Add Player\n";
        cout << "2. Display Players\n";
        cout << "3. Sort Players by Name\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice){

            case 1:
                Services::acceptData();
                break;

            case 2:
                Services::displayData();
                break;

            case 3:
                Services::sortPlayer();
                cout << "Players sorted by name\n";
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    }while(choice != 4);

    return 0;
}