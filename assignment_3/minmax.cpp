#include<iostream>
using namespace std;

void acceptarr(int* arr,int n){
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
}

void sort(int* arr,int n){
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int max(int* arr,int n){
	return arr[n-1];
}
int min(int *arr){
	return arr[0];
}
int smax(int* arr,int n){
	return arr[n-2];
}
int smin(int*arr){
         return arr[1];
}
int main(){
	int* arr;
	int n;
	cout<<"Enter the size of array:";
	cin>>n;
	arr =new int[n];
	cout<<"Enter the array:";
	acceptarr(arr, n);
	sort(arr, n);
	cout<<"The maximum value is :"<<max(arr, n)<< endl;
	cout<<"The second maximum value is :"<<smax(arr, n)<< endl;
	cout<<"The minimum value is :"<<min(arr)<< endl;
	cout<<"The second minimum value is :"<<smin(arr)<< endl;
	delete[] arr;
	return 0;
}


