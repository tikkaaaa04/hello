#include<iostream> 
#include<cmath> 
using namespace std; 
void  roots(double a, double b, double c){ 
double s= sqrt((b*b)-4*a*c); 
double p=((-b)+s)/2*a; 
double n=((-b)-s)/2*a; 
cout<<"Roots are "<<p<<" "<<n<<endl; 
} 
int main(){ 
        double a,b,c; 
        cout<<"Enter the coefficients "; 
        cin>>a>>b>>c; 
        roots(a,b,c); 
        return 0; 
}