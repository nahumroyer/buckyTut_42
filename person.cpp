// person.cpp CPP file

#include "person.h"
#include <iostream>
using namespace std;

// Creating a constructor that takes 2 variables and
// sets one = var, one = constant var
Person::Person(int a, int b)
: regVar(a), constVar(b)
{
}

Person::~Person(){
    cout << "I am desconstructed" << endl;
}

void Person::printCrap(){
    cout << "did someone say steak?" << endl;
}

void Person::printShits(){
    cout << "i'm printin regular function" << endl;
}

void Person::printShits2() const {
    cout << "this is the constant function" << endl;
}

void Person::print(){
    cout << "regualar var is " << regVar << " and const var is " << constVar << endl;
}
