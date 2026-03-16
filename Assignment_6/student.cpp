#include<iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;

public:

    void Accept(Student s[], int &count)
    {
        cout << "Enter Roll No: ";
        cin >> s[count].rollNo;

        cout << "Enter Name: ";
        cin >> s[count].name;

        count++;   // increase count after adding student
    }

    void Display(Student s[], int count)
    {
        cout << "\nStudent Details:\n";

        for(int i=0;i<count;i++)
        {
            cout << "Roll No: " << s[i].rollNo << endl;
            cout << "Name: " << s[i].name << endl;
            cout << "-------------------\n";
        }
    }
};

int main()
{
    Student s[10], obj;
    int count = 0;
    int choice;

    do
    {
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                obj.Accept(s, count);
                break;

            case 2:
                obj.Display(s, count);
                break;
        }

    } while(choice != 3);

    return 0;
}