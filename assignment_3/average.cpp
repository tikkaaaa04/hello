#include<iostream>
using namespace std;

void acceptarr(double* arr,int n){
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
}
double avg(double* arr,int n){
	double sum=0,avg;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	avg=sum/n;
	return avg;
}
int main(){
	double* arr;
	int n;
	cout<<"Enter array size:";
	cin>>n;
	arr = new double[n];
	cout<<"Enter the array: ";
	acceptarr(arr,n);
	cout<<"average is:"<<avg(arr,n)<<endl;
	delete[] arr;
	return 0;
}
