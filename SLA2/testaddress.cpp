#include<iostream>
#include<cstring>
#include"address.h"
using namespace std;

int main(){
	Address a1;
	a1.accept();
	a1.display();
	Address a2;
	a2.accept();
	a2.display();
	Address a3;
	a3.comp(a1,a2);
	return 0;
}
