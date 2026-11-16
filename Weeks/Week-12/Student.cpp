/**
 * Student.cpp
 */

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
  string name;
  int id;

public:
  Student() {
    name = "unkwown";
    id = 0;
  }

  Student(string theName, int theId) {
    name = theName;
    id = theId;
  }

  ~Student() { cout << "Destructor called for " << name << '\n'; }

  void display() {
    cout << "Name: " << name << '\n';
    cout << "Id: " << id << '\n';
  };
};
