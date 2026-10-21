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

  int age;
  while (true) {
    cout << "Enter age: ";
    if (!(cin >> age)) {
      cerr << "Bad input. Try again." << '\n';
      continue;
    }
    cout << "Valid. Bye." << '\n';
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    break;
  }

  istringstream input3("ABCDEFGHILMNOPQRSWZYZ");

  // write()
  cout << "first 10 letters: ";
  cout.write("ABCDEFGHILMNOPQRSWZYZ", 10).put('\n');

  const int SIZE = 80;
  char buffer[SIZE];

  // unformatted read()
  // read next 20 characters
  input3.read(buffer, 20);

  // how many chars were extracted
  streamsize count = input3.gcount();

  cout << "First read: ";
  cout.write(buffer, count).put('\n');

  cout << "chars read: " << count << '\n';

  displayCinFlags();

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
