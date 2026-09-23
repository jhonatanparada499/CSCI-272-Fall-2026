#include <iostream>
// #include <vector>
// #include <algorithm> //req by sort()
using namespace std;

int main(){
  string firstName;
  string lastName;
  string fullName, quote;

  getline(cin, quote);
  cout << "Full name enter: ";
  cin >> firstName >> lastName;
  // cin.clear();

  fullName = firstName + " " + lastName;
  cout << "Full Name: " << fullName << '\n';
  cout << lastName[1] << '\n';
  lastName[1] = 'J';
  cout << lastName << '\n';

  return 0;
}
