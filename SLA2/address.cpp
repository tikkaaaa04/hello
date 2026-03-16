#include<iostream>
#include<cstring>
#include"address.h"
using namespace std;

Address::Address(){
	houseno=0;
	colony[0]='\0';
	area[0]='\0';
	city[0]='\0';
	pincode=0;
}

Address::Address(int hn,char* co,char* a,char* c,int p){
	houseno=hn;
        strcpy(colony,co);
        strcpy(area,a);
        strcpy(city,c);
        pincode=p;
}

void Address::accept(){
	cout<<"Enter the House no:";
	cin>>houseno;
	cout<<"Enter the colony:";
	cin>>colony;
	cout<<"Enter the area:";
	cin>>area;
	cout<<"Enter the city:";
	cin>>city;
	cout<<"Enter the pincode";
	cin>>pincode;
}

void Address::display(){
	cout<<"House no."<<houseno<<"\n colony: "<<colony<<"\n area: "<<area<<"\n city: "<<city<<"\n pincode: "<<pincode<<endl;
}

void Address::comp(Address a1,Address a2){
	if(a1==a2){
		cout<<"Address is same<<endl";
	}
	else{
		cout<<"Address is different"<<endl;
	}
}

bool Address::operator==(const Address &a1){
	if(houseno==a1.houseno && strcmp(colony,a1.colony)==0 && strcmp(area,a1.area)==0 && strcmp(city,a1.city)==0 && pincode==a1.pincode){
		return true;
	}
	return false;
}

