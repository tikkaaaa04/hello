#include<iostream>
using namespace std;

void swap(int &x, int &y){
	int temp=x;
	x=y;
	y=temp;
}
int main(){
 int a,b;
 cout<<"Enter the numbers:";
 cin>>a>>b;
 swap(a,b);
 cout<<"The swapped numbers are:"<<"a= "<<a<<" "<<"b= "<<b<< endl;
 return 0;
}
