#include<iostream>
#include "Services.h"
#include<cstring>
using namespace std;

Player **Services :: parr = new Player*[Services::size];
int Services:: count = 0;
void Services::acceptData(){
    char nm[100];
    int age;
    char cn[100];

    cout<<"Enter name :";
    cin>> nm;

    cout<< "Enter age: ";
    cin >> age;
    cout<< "Enter country: ";
    cin>> cn;
    storeData(nm, age, cn);
    
}
void Services::storeData(const char* nm, int age, const char* cn){
    if(count >= size){
        cout<< "Array full" <<endl;
        return;
    }
    parr[count] = new Player(nm,age,cn);
    count++;
}
void Services::displayData(){
    for(int i=0;i<count;i++){
        parr[i] ->display();
    }
}
void Services::sortPlayer(){

    for(int i=0;i<count-1;i++){
        for(int j=i+1;j<count;j++){

            if(strcmp(parr[i]->getName(), parr[j]->getName()) > 0){

                Player* temp = parr[i];
                parr[i] = parr[j];
                parr[j] = temp;

            }
        }
    }
}