#include<iostream>
#include<cstring>
#include "MyString.h"
using namespace std;

MyString::MyString(){
    size = 0;
    p = new char[1];
    *p = '\0';
}

MyString::MyString(const char* str, int sz){
    size = sz;
    p = new char[size + 1];
    strcpy(p, str);
}

MyString::MyString(MyString &s){
    size = s.size;
    p = new char[size + 1];
    strcpy(p, s.p);
}

MyString::~MyString(){
    cout << "Destructor called" << endl;
    delete[] p;
    p = nullptr;
}
void MyString::acceptData(){
    cout << "Enter size of string: ";
    cin >> size;
    delete[] p;
    p = new char[size + 1];
    cout << "Enter string: ";
    cin >> p;
    
}
void MyString::display(){
    cout << "String : " << p    << endl;
    cout << "Size   : " << size << endl;
}