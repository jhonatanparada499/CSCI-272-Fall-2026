/**
 * MyClass.cpp
 */

#include "MyClass.h"
#include <iostream>

using namespace std;

MyClass::MyClass() { myVar = 0; };
void MyClass::myFunc() { ++myVar; }
void MyClass::displayVal() { cout << "Curr val: " << myVar << '\n'; }
