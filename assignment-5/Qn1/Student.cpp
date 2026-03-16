#include<iostream>
#include<cstring>
#include "Student.h"
using namespace std;


// default constructor
Student::Student(){
    rollNo = 0;
    name = new char;
    *name = '\0';
    course = new char;
    *course = '\0';
}

// parameterised constructor
Student::Student(int r,const char* nm, const char* cs){
    rollNo = r;
    name = new char[strlen(nm)+1];
    strcpy(name,nm);
    course = new char[strlen(cs)+1];
    strcpy(course,cs);
}

// copy constructor
Student::Student(Student &s){
    cout<<"Student copy constructor called"<<endl;
    this->rollNo = s.rollNo;

    name = new char[strlen(s.name)+1];
    strcpy(name,s.name);

    course = new char[strlen(s.course)+1];
    strcpy(course,s.course);
}

// setter methods
inline void Student::setRollNo(int r){
    rollNo = r;
}

inline void Student::setName(const char* nm){
    if(name)
        delete[] name;

    name = new char[strlen(nm)+1];
    strcpy(name,nm);
}

inline void Student::setCourse(const char* cs){
    if(course)
        delete[] course;

    course = new char[strlen(cs)+1];
    strcpy(course,cs);
    
}

// getter methods
int Student::getRollNo(){
    return rollNo;
}

char* Student::getName(){
    return name;
}

char* Student::getCourse(){
    return course;
}

// display function
void Student::display(){
    cout<<"Roll No: "<<rollNo<<" Name: "<<name<<" Course: "<<course<<endl;
}

// destructor
Student::~Student(){
    if(name)
        delete[] name;
    if(course)
        delete[] course;
}
