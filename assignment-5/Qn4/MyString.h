#include <iostream>
using namespace std;
class MyString{
    private:
        char* p;
        int size;
    public:
        MyString();
        MyString(const char* p, int size);
        MyString(MyString &s);
        ~MyString();
        void acceptData();
        void display();


};