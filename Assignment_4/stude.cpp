#include<iostream>
#include<cstring>
using namespace std;
class Student{
	private: 
       int roll_no;
       char name[35];
public:
       void acceptdata(){
       cout<<"Enter the roll no. and name";
       cin>>roll_no;
       cin>>name;
       }
       void displaydata(){
       cout<<"The roll no. is:"<<roll_no<<endl;
       cout<<"The name is:"<<name<<endl;
       }

};
int main(){
Student s;
s.acceptdata();
s.displaydata();
return 0;
}

