#include<iostream>
using namespace std;
void acceptchar(char* arr, int n){
	for(int i=0; i<n; i++){
	cin>>arr[i];
	}
}
int searchchar(char* arr, int n, char s){
	int count=0;
	for(int i=0; i<n;i++){
		if(arr[i]==s){
			count++;
		}
	}
	return count;
}
int main(){
	char* arr;
	int n;
	char s;
	cout<<"Enter the size : ";
	cin>>n;
	cout<<"Enter the array : ";
	acceptchar(arr, n);
	cout<<"Enter the character whose count you want to know:";
	cin>>s;
	cout<<"The count is:"<<searchchar(arr, n ,s)<<endl;
	return 0;
}
