// person.cpp CPP file

#include "person.h"
#include <iostream>
using namespace std;

Person::Person()
{
    cout << "this is the constructor" << endl;
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
