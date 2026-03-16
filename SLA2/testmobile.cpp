#include<iostream>
#include<cstring>
#include"mobile.h"
using namespace std;

int searchByManufacturer(Mobile **marr,int size,char *name){
	for(int i=0;i<size;i++){
		if(strcmp(marr[i]->getmanu(),name)==0){
			return i;
		}
	}
	return -1;
}

int main(){
	Mobile *marr[100];
	int choice=0,count=0,pos;
	char name[35];

	do{
		cout<<"\n1.Add Mobile";
		cout<<"\n2.Display list of available mobiles";
		cout<<"\n3.Find out quantity of particular mobile type";
		cout<<"\n4.Find out availability of particular model";
		cout<<"\n5.Exit";

		cout<<"\nEnter the choice:";
		cin>>choice;

		switch(choice){

			case 1:
				marr[count] = new Mobile();
				marr[count]->accept();
				count++;
				break;

			case 2:
				for(int i=0;i<count;i++){
					marr[i]->display();
				}
				break;

			case 3:
				cout<<"Enter the Manufacturer:";
				cin>>name;

				pos=searchByManufacturer(marr,count,name);

				if(pos!=-1){
					cout<<"Quantity is "<<marr[pos]->getquantity()<<endl;
				}
				else{
					cout<<"Out of Stock!!!!!"<<endl;
				}
				break;

			case 4:
				cout<<"Enter the Manufacturer:";
				cin>>name;

				pos=searchByManufacturer(marr,count,name);

				if(pos!=-1){
					cout<<"Available"<<endl;
				}
				else{
					cout<<"Out of Stock!!!!!"<<endl;
				}
				break;

			case 5:
				cout<<"Thank you"<<endl;
				break;
		}

	}while(choice!=5);

	return 0;
}