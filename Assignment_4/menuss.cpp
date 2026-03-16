#include<iostream>
#include<cstring>
using namespace std;

void acceptdata(int* arr,int n){
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
}

void acceptdata(char* arr,int n){
	for(int i=0;i<n;i++){
		cout<<"Enter the character:";
		cin>>arr[i];
		cout<<endl;
	}
}
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
        for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
        }
        cout<<endl;
}

int avg(int* arr,int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	return sum/n;
}

void multiply(int* arr,int n){
       for(int i=0;i<n;i++){
       		arr[i]=arr[i]*2;
 	}
}

string createstring(char* arr,int n){
	string str=arr;
	return str;
}

int main(){
	int choice,n;
	int *arr=new int[20];
	char *arr1=new char[20];
	cout<<"1.Sorted array"<<endl<<"2.Creating string using chracters"<<endl<<"3.Finding average"<<endl<<"4.Double the array"<<endl;
	cout<<"Enter the choice:";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"Enter the array size :";
			cin>>n;
			acceptdata(arr,n);
			sortarray(arr,n);
			display(arr,n);
			break;
		case 2:
			cout<<"Enter the number of characters you want:";
			cin>>n;
			acceptdata(arr1,n);
			cout<<"The string is :"<<createstring(arr1,n);
			break;
		case 3:
			cout<<"Enter the array size :";
			cin>>n;
			acceptdata(arr,n);
			cout<<"The average is :"<<avg(arr,n)<<endl;
			break;
		case 4:
			cout<<"Enter the array size :";
			cin>>n;
			acceptdata(arr,n);
			multiply(arr,n);
			display(arr,n);
			break;
		default:
			cout<<"Enter the correct choice !!!!!"<<endl;
	}
	return 0;
}
