#include <iostream>
#include <string>
using namespace std;

int main(){
  string firstName,
    lastName,
    fullName, quote;

  cout << "Full name enter: ";
  cin >> firstName >> lastName;
  cout << "Enter quote: ";
  // clear cin buffer bf reading line
  getline(cin >> ws, quote);

  fullName = firstName + " " + lastName;
  cout << "Full Name: " << fullName << '\n';
  cout << lastName[1] << '\n';
  lastName[1] = 'J';
  cout << lastName << '\n';

  return 0;
}
