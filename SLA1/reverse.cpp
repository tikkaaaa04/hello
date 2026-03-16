#include<iostream>
#include<cstring>
using namespace std;

void reverse(char str[])
{
    int i=0;
    int j=strlen(str)-1;
    char temp;

    while(i<j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

int main()
{
    char str[100];

    cout<<"Enter a string: ";
    cin.getline(str,100);

    reverse(str);

    cout<<"Reversed string: "<<str;

    return 0;
}