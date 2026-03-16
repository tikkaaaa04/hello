#include<iostream>
#include<cstring>
#include"mobile.h"
using namespace std;

Mobile::Mobile(){
	modelno=0;
	price=0;
	manufacturer[0]='\0';
	quantity=0;
}

Mobile::Mobile(int mno,int p,char* m,int q){
	modelno=mno;
	price=p;
	strcpy(manufacturer,m);
	quantity=q;
}

void Mobile::accept(){
	cout<<"Enter the model number:";
	cin>>modelno;

	cout<<"Enter the price:";
	cin>>price;

	cout<<"Enter the name of the manufacturer:";
	cin>>manufacturer;

	cout<<"Enter the total Quantity:";
	cin>>quantity;
}

void Mobile::display(){
	cout<<"Model number is "<<modelno
	<<"\nPrice is "<<price
	<<"\nManufacturer is "<<manufacturer
	<<"\nQuantity is "<<quantity<<endl;
}

int Mobile::getmno(){
	return modelno;
}

int Mobile::getquantity(){
	return quantity;
}

char* Mobile::getmanu(){
	return manufacturer;
}