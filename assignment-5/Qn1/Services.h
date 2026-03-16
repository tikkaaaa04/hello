#include <iostream>
#include "Student.h"
using namespace std;


class Services {
private:
    static const int size = 100;
    static Student **sarr;
    static int count;
    

    static void storeData(int r, const char* nm, const char* cs);

public:
    static void acceptData();
    static void displayData();
    static void searchData();

};
