// practice.cpp

#include <cctype>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

bool isValidPhoneNumber(const string &input);

int main() {
  string phone;
  string input;
  int number;

  cout << "Enter phone: "
       << "(e.g. (800) 111-2323): ";
  getline(cin, phone);

  if (!(isValidPhoneNumber(phone))) {
    cout << "Is not valid phone number" << '\n';
    return -1;
  }

  string areaCode(
      phone.substr(
        phone.find_first_of('(') + 1,
        phone.find_last_of(')') - 1
    )
  );

  cout << "The arecode: ";
  cout << areaCode << '\n';

  // end program temporally
  return 0;

  // check for input
  // if (!(iss >> number)) {
  //   cout << "Invalid input" << '\n';
  // }
  //
  // // remove extra whitespace
  // iss >> ws;
  //
  // // eof()
  // if (!iss.eof()) {
  //   cout << "Extra chars found." << '\n';
  //   return -1;
  // }
  //
  // // range condition
  // if (number < 0 || number > 100) {
  //   cout << "Invalid range, try (1-100)" << '\n';
  //   return -1;
  // }
}

bool isValidPhoneNumber(const string &input) {

  if (input[input.find_first_of('(')] != '(') {
    cout << input[input.find_first_of('(')] << '\n';
    return false;
  }

  if (input[input.find_first_of('(') + 4] != ')') {
    return false;
  }

  // validate spaces and dash
  // validates char to int
  // char aChar = '1';
  // isdigit(static_cast<unsigned char>(aChar))

  return true;
}
