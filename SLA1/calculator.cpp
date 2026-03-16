#include<iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int mul(int a,int b)
{
    return a*b;
}

float divi(int a,int b)
{
    return (float)a/b;
}

int main()
{
    int a,b,choice;

    cout<<"Enter first number: ";
    cin>>a;

    cout<<"Enter second number: ";
    cin>>b;
    cout<<"1. Addition\n";
    cout<<"2. Subtraction\n";
    cout<<"3. Multiplication\n";
    cout<<"4. Division\n";

    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"Addition = "<<add(a,b);
            break;

        case 2:
            cout<<"Subtraction = "<<sub(a,b);
            break;

        case 3:
            cout<<"Multiplication = "<<mul(a,b);
            break;

        case 4:
            cout<<"Division = "<<divi(a,b);
            break;

        default:
            cout<<"Invalid Choice";
    }

    return 0;
}