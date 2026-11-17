/**
 * solution.cpp
 */

#include <iostream>

using namespace std;

int main() {
  // asks name
  string fullName;
  cout << "Enter full name: ";
  getline(cin, fullName);

  // print name details
  cout << "Full name: " << fullName << '\n';
  cout << "Total chars: " << fullName.length() << '\n';
  cout << "First char: " << fullName.at(0) << '\n';
  cout << "Last char: " << fullName[fullName.length() - 1] << '\n';

  // add prefix
  fullName = "Mr. " + fullName;

  // add suffix
  fullName += " Jr.";

  cout << fullName << '\n';

  // part 4
  int num;
  string sNum;
  cout << "Enter num: ";
  cin >> sNum;
  num = stoi(sNum);

  return 0;
}
