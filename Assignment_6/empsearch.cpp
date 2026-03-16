#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Employee
{
public:
    int empid;
    string name;
    float sal;
};

// Function to print Employee array
void printEmployees(Employee e[], int n)
{
    cout<<"\nEmployee Details\n";

    for(int i=0;i<n;i++)
    {
        cout<<"Emp ID: "<<e[i].empid<<endl;
        cout<<"Name: "<<e[i].name<<endl;
        cout<<"Salary: "<<fixed<<setprecision(0)<<e[i].sal<<endl;
        cout<<"-------------------"<<endl;
    }
}


// Bubble Sort Function
void bubbleSort(Employee e[], int n, int order)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(order==1) // Ascending
            {
                if(e[j].sal > e[j+1].sal)
                {
                    Employee temp = e[j];
                    e[j] = e[j+1];
                    e[j+1] = temp;
                }
            }
            else // Descending
            {
                if(e[j].sal < e[j+1].sal)
                {
                    Employee temp = e[j];
                    e[j] = e[j+1];
                    e[j+1] = temp;
                }
            }
        }
    }
}


int main()
{
    int n;

    cout<<"Enter number of employees: ";
    cin>>n;

    Employee emp[n];

    // Accept Employee Data
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter details of Employee "<<i+1<<endl;

        cout<<"Enter Emp ID: ";
        cin>>emp[i].empid;

        cout<<"Enter Name: ";
         cin>>emp[i].name;

        cout<<"Enter Salary: ";
        cin>>emp[i].sal;
    }

    cout<<"\nOriginal Employee Data:";
    printEmployees(emp,n);

    int choice;

    cout<<"\nSort Salary\n";
    cout<<"1. Ascending\n";
    cout<<"2. Descending\n";
    cout<<"Enter choice: ";
    cin>>choice;

    bubbleSort(emp,n,choice);

    cout<<"\nSorted Employee Data:";
    printEmployees(emp,n);

    return 0;
}
                           