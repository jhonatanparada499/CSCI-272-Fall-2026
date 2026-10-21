#include <iostream>
#include <limits>  // for numeric_limits
#include <sstream> // for istringstream type
#include <string>

using namespace std;

class Person {
public:
  string name;
  int age;
};

void displayCinFlags() {
  // now bool vals are printed in words
  cout << boolalpha;

  cout << cin.rdstate() << '\n';
  cout << cin.fail() << '\n';
  cout << cin.eof() << '\n';
  cout << cin.bad() << '\n'; // serious IO error
}

int main() {
  string inString{"Alice 20"};

  istringstream test1(inString);

  Person p1;

  if (!(test1 >> p1.name >> p1.age)) {
    cerr << "Error: Invalid data type" << endl;
    return -1;
  }

  cout << p1.name << '\n';
  cout << p1.age << '\n';

  char aChar;
  cout << "Enter char: ";

  if (!(cin.get(aChar))) {
    cerr << "Error: Invalid data type" << endl;
    return -1;
  }

  // clearing buffer
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  cout << "Etnered: " << aChar << '\n';

  string fullname;
  cout << "Full name: ";
  getline(cin, fullname);

  cout << "Entered Full name: " << fullname << '\n';
}
