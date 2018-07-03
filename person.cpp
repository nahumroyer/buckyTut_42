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
