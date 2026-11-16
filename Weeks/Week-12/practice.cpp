/**
 * practice.cpp
 */

#include "MyClass.cpp"
#include "Student.cpp"
#include <iostream>

using namespace std;

int main() {
  MyClass obj;

  cout << "Init val: ";
  obj.displayVal();

  obj.myFunc(); // 1
  obj.myFunc();
  obj.myFunc(); // 3

  cout << "After incre: ";
  obj.displayVal();

  // Student example

  Student s1;
  s1.display();

  Student s2("Alex", 1);
  s2.display();

  // Enter new scope
  {
    Student s3("Maria", 2);
    s3.display();
    cout << "Inside scope" << '\n';
  }

  cout << "Outside scope" << '\n';
  return 0;
}
