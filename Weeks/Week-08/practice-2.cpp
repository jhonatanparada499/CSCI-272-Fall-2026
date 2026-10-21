#include <iostream>
#include <sstream> // for istringstream type
#include <string>

using namespace std;

class Person {
public:
  string name;
  int age;
};

int main() {
  string inString{"Alice 20"};

  istringstream test1(inString);

  Person p1;

  if (!(test1 >> p1.name >> p1.age)) {
    cerr << "Error: Invalid data type" << endl;
  }

  cout << p1.name << '\n';
  cout << p1.age << '\n';
}
