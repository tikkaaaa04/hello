#include<iostream>
#include<string>
using namespace std;

void compareStrings(string s1, string s2)
{
    if(s1 == s2)
        cout<<"Strings are Equal";
    else
        cout<<"Strings are Not Equal";
}

int main()
{
    string str1, str2;

    cout<<"Enter first string: ";
    getline(cin,str1);

    cout<<"Enter second string: ";
    getline(cin,str2);

    compareStrings(str1,str2);

    return 0;
}