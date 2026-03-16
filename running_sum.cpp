#include<iostream>
using namespace std;


int main(){
	int n,sum=0;
	char choice;
	do{
		cout<<"Enter the number:";
		cin>>n;
		sum=sum+n;
		cout<<"Do you want to continue:";
		cin>>choice;
	}while(choice=='y');

	cout<<"The running sum is "<<sum<<endl;

	return 0;
}
