#include<iostream> 
using namespace std; 
 
float circle(float r){ 
        return 3.14*r*r; 
} 
float rectangle(float l , float b){ 
        return l*b; 
} 
float square(float a){ 
        return a*a; 
} 
int main(){ 
        int choice; 
        float r,l,b,a; 
        cout<<"1.Circle"<<endl<<"2.Rectangle"<<endl<<"3.Square"<<endl<<"Enter the choice:";
        cin>>choice; 
        switch(choice){ 
                case 1: 
                        cout<<"enter the value of r: "; 
                        cin>>r; 
                         cout<<"the area of circle is "<<circle(r)<<endl; 
                         break; 
                case 2: 
                         cout<<"enter the value of l and b: "; 
                        cin>>l>>b; 
                        cout<<"the area of rectangle is "<<rectangle(l,b)<<endl; 
                        break; 
                case 3: 
                        cout<<"enter the value of side: "; 
                         cin>>a; 
                         cout<<"the area of square is "<<square(a)<<endl; 
                         break; 
                default: 
                 cout<<"enter the correct choice"<<endl; 
                } 
        return 0; 
}