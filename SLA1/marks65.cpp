#include<iostream>
using namespace std;

void acceptmarks(double* arr){
        for(int i=0;i<5;i++){
                cin>>arr[i];
        }
}
int check(double* arr){
        int count=0;
        for(int i=0;i<5;i++){
                if(arr[i]<=65){
                        count++;
                }
        }
        return count;
}
double avg(double* arr){
        double sum=0,avg;
        for(int i=0;i<5;i++){
                sum=sum+arr[i];
        }
        avg=sum/5;
        return avg;
}
int main(){
        double arr[5];
	cout<<"Enter 5 grades: ";
	acceptmarks(arr);
        cout<<"count:"<<check(arr)<<endl;
        cout<<"average is:"<<avg(arr)<<endl;
        return 0;
}


