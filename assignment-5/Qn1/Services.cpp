#include<iostream>
#include "Services.h"

using namespace std;

Student **Services::sarr = new Student*[Services::size];
int Services::count = 0;

void Services::storeData(int r,const char* nm, const char* cs){
    if(count >= size){
        cout<<"Array Full"<<endl;
        return;
    }
    sarr[count] = new Student(r,nm,cs);
    count++;
}

void Services::acceptData(){

    int r;
    char nm[100];
    char cs[100];

    cout<<"Enter Roll No: ";
    cin>>r;

    cout<<"Enter First Name: ";
    cin>>nm;

    cout<< "Enter Course: ";
    cin>> cs;

    storeData(r,nm,cs);
}

void Services::displayData(){
    for(int i=0;i<count;i++){
        sarr[i]->display();
    }
}

void Services::searchData() {
    int r;
    cout << "Enter Roll No to search: ";
    cin >> r;
    for (int i = 0; i < count; i++) {
        if (sarr[i]->getRollNo() == r) {
            sarr[i]->display();
            return;
        }
    }
    cout << "Student with Roll No " << r << " not found." << endl;
}