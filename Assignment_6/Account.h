#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<iostream>
#include<string>
using namespace std;

class Share
{
private:
    string sname;
    int numshares;
    string pdate;
    double pprice;
    string sdate;
    double sprice;

public:
    void accept();
    void display();
};

class Account
{
protected:
    string fname,lname,mobile,email,id;
    int pin;
    double balance;

    static int count;
    static string generateId(string,string);

public:
    virtual void acceptdata();
    virtual void displaydata();

    double getBalance();
    void changePin();

    virtual bool withdraw(double)=0;
    virtual bool deposit(double)=0;
};

class SavingAccount : public Account
{
private:
    int chequebknum;

public:
    static double interestrate;
    static double minbalance;

    void acceptdata();
    void displaydata();

    bool withdraw(double);
    bool deposit(double);
};

class CurrentAccount : public Account
{
private:
    int transnum;

public:
    static double interestrate;
    static double minbalance;

    void acceptdata();
    void displaydata();

    bool withdraw(double);
    bool deposit(double);
};

class DematAccount : public Account
{
private:
    Share sarr[100];
    int countShare;

public:
    DematAccount();

    bool withdraw(double);
    bool deposit(double);

    void buyStock();
    void sellStock();

    void displaydata();
};

#endif