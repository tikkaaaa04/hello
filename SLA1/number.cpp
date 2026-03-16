#include<iostream>
using namespace std;

void checkPrime(int n)
{
    int flag = 0;

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag = 1;
            break;
        }
    }

    if(flag==0 && n>1)
        cout<<"Number is Prime\n";
    else
        cout<<"Number is Not Prime\n";
}

void checkOddEven(int n)
{
    if(n%2==0)
        cout<<"Number is Even\n";
    else
        cout<<"Number is Odd\n";
}

void checkPosNeg(int n)
{
    if(n>0)
        cout<<"Number is Positive\n";
    else if(n<0)
        cout<<"Number is Negative\n";
    else
        cout<<"Number is Zero\n";
}

int main()
{
    int n,choice;

    cout<<"Enter a number: ";
    cin>>n;

    do
    {
    
        cout<<"1. Check Prime Number\n";
        cout<<"2. Check Odd or Even\n";
        cout<<"3. Check Positive or Negative\n";
        cout<<"4. Exit\n";

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                checkPrime(n);
                break;

            case 2:
                checkOddEven(n);
                break;

            case 3:
                checkPosNeg(n);
                break;

            case 4:
                cout<<"Program Ended\n";
                break;

            default:
                cout<<"Invalid Choice\n";
        }

    }while(choice!=4);

    return 0;
}