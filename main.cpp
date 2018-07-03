#include <iostream>
#include "person.h"
using namespace std;

int main(){
    Person pson_object;
    Person *pson_pointer = &pson_object;

    pson_object.printCrap();
    pson_pointer->printCrap();
}
