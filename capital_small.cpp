#include<iostream> 
using namespace std; 
 
int main(){ 
        char ch; 
        cout<<"Enter the character :"; 
        cin>>ch; 
        if(ch<=90 && ch>=65){ 
                cout<<"The character is Capital"<<endl; 
        } 
        else if(ch>=97 && ch<=122){ 
                cout<<"The character is Small"<<endl; 
        } 
        else{ 
                cout<<"Invalid!!!!"<<endl; 
        } 
        return 0; 
} 