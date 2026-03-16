#include<iostream>
#include<cstring>
#include "Player.h"
using namespace std;

Player::Player(){
    name = new char[1];
    *name = '\0';

    age = 0;

    country = new char[1];
    *country = '\0';
}

Player::Player(const char* nm, int ag, const char* cn){
    name = new char[strlen(nm)+1];
    strcpy(name, nm);

    age = ag;

    country = new char[strlen(cn)+1];
    strcpy(country, cn);
}

Player::Player(Player &p){
    cout << "This is copy constructor" << endl;

    name = new char[strlen(p.name)+1];
    strcpy(name, p.name);

    age = p.age;

    country = new char[strlen(p.country)+1];
    strcpy(country, p.country);
}

void Player::setName(const char* nm){
    if(name)
        delete[] name;

    name = new char[strlen(nm)+1];
    strcpy(name, nm);
}

void Player::setAge(int ag){
    age = ag;
}

void Player::setCountry(const char* cn){
    if(country)
        delete[] country;

    country = new char[strlen(cn)+1];
    strcpy(country, cn);
}

char* Player::getName(){
    return name;
}

int Player::getAge(){
    return age;
}

char* Player::getCountry(){
    return country;
}

void Player::display(){
    cout << "Name: " << name 
         << " Age: " << age 
         << " Country: " << country << endl;
}

Player::~Player(){
    if(name)
        delete[] name;

    if(country)
        delete[] country;
}