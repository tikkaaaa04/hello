#include<iostream>
using namespace std;

class Matrix
{
    int a[10][10];
    int r,c;
public:
    void accept()
    {
        cout<<"Enter number of rows: ";
        cin>>r;

        cout<<"Enter number of columns: ";
        cin>>c;

        cout<<"Enter matrix elements:\n";
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>a[i][j];
            }
        }
    }
    void display()
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    Matrix operator+(Matrix m)
    {
        Matrix temp;
        temp.r = r;
        temp.c = c;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                temp.a[i][j] = a[i][j] + m.a[i][j];
            }
        }

        return temp;
    }

    Matrix operator-(Matrix m)
    {
        Matrix temp;
        temp.r = r;
        temp.c = c;

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                temp.a[i][j] = a[i][j] - m.a[i][j];
            }
        }

        return temp;
    }

    Matrix operator*(Matrix m)
    {
        Matrix temp;
        temp.r = r;
        temp.c = m.c;

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<m.c;j++)
            {
                temp.a[i][j] = 0;

                for(int k=0;k<c;k++)
                {
                    temp.a[i][j] += a[i][k] * m.a[k][j];
                }
            }
        }

        return temp;
    }
};

int main()
{
    Matrix m1,m2,m3;
    int choice;

    cout<<"Enter First Matrix\n";
    m1.accept();

    cout<<"\nEnter Second Matrix\n";
    m2.accept();

    do
    {
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Exit\n";

        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                m3 = m1 + m2;
                cout<<"\nAddition Result:\n";
                m3.display();
                break;

            case 2:
                m3 = m1 - m2;
                cout<<"\nSubtraction Result:\n";
                m3.display();
                break;

            case 3:
                m3 = m1 * m2;
                cout<<"\nMultiplication Result:\n";
                m3.display();
                break;

            case 4:
                cout<<"Program Ended\n";
                break;

            default:
                cout<<"Invalid choice\n";
        }

    }while(choice!=4);

    return 0;
}
