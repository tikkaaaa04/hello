#include<iostream>
#include<cstring>
#include"employee.h"
using namespace std;

Employee::Employee(){
	empno=0;
	empname[0]='\0';
	da=0;
	hra=0;
	bsalary=0;
}
Employee::Employee(int eno,char *ename, double d, double h, double s){
	empno=eno;
	strcpy(empname, ename);
	da=d;
	hra=h;
	bsalary=s;
}
void Employee::accept(){
	cout<<"Enter employee number: ";
	cin>>empno;
	cout<<"Enter employee name: ";
        cin>>empname;
	cout<<"Enter DA: ";
        cin>>da;
	cout<<"Enter HRA : ";
        cin>>hra;
	cout<<"Enter employee's basic salary: ";
        cin>>bsalary;

}
void Employee::display(){
	cout<<"Employee no. is :"<<empno<< "\n Employee name is: "<<empname<< "\n DA is: "<<da<<"\n HRA is: "<<hra<< "\n Basic salary is: "<<bsalary<<endl;
}

double Employee::salary(){
	return ((da/100)*bsalary)+((hra/100)*bsalary)+bsalary;
}


