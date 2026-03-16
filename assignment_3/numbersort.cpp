#include<iostream>
using namespace std;

void sortarray(int* arr,int n ){
  int temp;
  for(int i=0;i<n-1;i++){
	  for(int j=0;j<n-i-1;j++){
		  if(arr[j]>arr[j+1]){
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		  }
	  }
  }	  
}

void display(int* arr,int n){
	cout<<"Sorted array:";
        for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
        }
        cout<<endl;
}

int main(){
	int* arr;
	int n;
	cout<<"Enter the array size:";
	cin>>n;
	arr= new int[n];
	cout<<"enter the numbers : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sortarray(arr,n);
	display(arr,n);
	delete[] arr;
	return 0;

}
