#include<iostream>
using namespace std;
void accept(int ro, int co,int arr[][]){
	for(int i=0; i<ro; i++){
		for(int j=0; j<co; j++){
		cin>>arr[i][j];
		}
   	 }
}
void display(int ro, int co, int arr[][]){
for(int i=0; i<ro; i++){
        for(int j=0; j<co; j++){
        cout<<arr[i][j]<<"  ";
        }
	cout<<endl;
    }
}
void transpose(int ro, int co, int arr[][]){
for(int i=0; i<ro; i++){
        for(int j=0; j<co; j++){
        arr[i][j]=transpose[j][i];
        }
    }   
}

int main(){
int r,c;
cout<<"Enter the number of rows:";
cin>>r;
cout<<"Enter the number of columns:";
cin>>c;
int arr[r][c];
accept(r,c,arr);
display(r,c,arr);
transpose(r,c,arr);
display(r,c,arr);
return 0;
}
