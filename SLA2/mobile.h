#include<iostream>
#include<cstring>
using namespace std;

class Mobile{
	private:
		int modelno;
		int price;
		char manufacturer[35];
		int quantity;

	public:
		Mobile();
		Mobile(int mno,int p,char* m,int q);
		void accept();
		int getmno();
		int getquantity();
		void display();
		char* getmanu();
};