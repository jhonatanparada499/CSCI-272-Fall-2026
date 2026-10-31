// practice.cpp

#include <cctype>
#include <iostream>
// #include <sstream>
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
    cout << "Invalid phone number format" << '\n';
    return -1;
  }

  string areaCode(
      phone.substr(
      phone.find_first_of('(') + 1,
      3
    )
  );

  cout << "The arecode: ";
  cout << areaCode << '\n';

  // end program temporally
  return 0;

  // check for input
  // if (!(iss >> number)) {
  //   cout << "Invalid input" << '\n';
  //   return -1;
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

/**
* Strips the symbols and spaces and counts the digits
*/
bool isValidPhoneNumber(const string &input) {
  const int PHONE_NUMBER_LENGTH = 10;
  string digits;

  for (const int curr : input){
    if (isdigit(static_cast<unsigned char>(curr))) {
      digits += curr;
    }
  }

  return digits.length() == PHONE_NUMBER_LENGTH;
}
