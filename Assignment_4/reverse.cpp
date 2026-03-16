#include<iostream>
#include<cstring>
using namespace std;
void reverse(char *arr,int start,int end){
if(start>=end){
return ;
}
char temp=arr[start];
arr[start]=arr[end];
arr[end]=temp;
reverse(arr,start+1,end-1);
}
int main(){
	char *arr=new char[20];
	cout<<"Enter the string:";
	cin>>arr;
	int length=strlen(arr);
	reverse(arr,0,length-1);
	cout<<"Reversed string is "<<arr<<endl;
	delete[] arr;
	return 0;
}

