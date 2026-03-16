#include<iostream>
#include<cstring>
using namespace std;
class Student{
private:
int sroll_no;
char sname[30];
public:

void acceptdata(){
	cout<<"Enter the roll_no and student  name:";
	cin>>sroll_no;
        cin>>sname;}

void display(){
cout<< sroll_no<<" ";
cout<<sname<<endl;
}
};

int main(){
int size;
cout<<"Enter the number of students you want to store the data for:";
cin>>size;
Student s[size];
for(int i=0;i<size;i++){
	s[i].acceptdata();
}
for(int i=0;i<size;i++){
	s[i].display();
}

return 0;
}
