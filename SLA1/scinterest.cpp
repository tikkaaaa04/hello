#include<iostream>
#include<cmath>
using namespace std;

double simple(double p,double r,double t){
	double si=0;
	si=(p*r*t)/100;
	return si;
}

double compound(double p,double r,double t){
	double ci=0;
	ci=p*pow((1+(r/100)),t);
	return ci-p;
}

int main(){
	double p,r,t;
	cout<<"enter the Principle:";
	cin>>p;
	cout<<"enter the interest rate:";
	cin>>r;
	cout<<"enter the time:";
	cin>>t;
	cout<<"Simple Interest is "<<simple(p,r,t)<<endl;
	cout<<"Compound Interest is "<<compound(p,r,t)<<endl;
	return 0;
}
