#include<iostream>
using namespace std;

void acceptarr(int* arr,int n){
        for(int i=0;i<n;i++){
                cin>>arr[i];
        }
}
void multiply(int* arr,int n){
        for(int i=0;i<n;i++){
                arr[i]=arr[i]*2;
        }
}
void display(int* arr, int n){
	for(int i=0;i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
        
        int n;
        cout<<"Enter array size:";
        cin>>n;
        int* arr= new int[n];
        cout<<"Enter the array: ";
        acceptarr(arr,n);
	multiply(arr, n);
        cout<<"The new array is:";
	display(arr, n);
        delete[] arr;
        return 0;
}

