#include<iostream>
#include<cstring>
#include"employee.h"
using namespace std;
int main(){
	Employee e1;
	e1.accept();
	e1.display();
	cout<<"Salary is "<<e1.salary()<<endl;
	Employee e2;
	e2.accept();
	e2.display();
	cout<<"Salary is "<<e2.salary()<<endl;
	return 0;

}
