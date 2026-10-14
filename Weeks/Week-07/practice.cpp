#include <iomanip>
#include <iostream>
#include <string>

int main() {
  int age{0};

  std::cout << "Enter age: ";
  // std::getline(std::cin >> std::ws, std::to_string(age));

  if (!(std::cin >> age)) {
    std::cerr << "Invalid." << '\n';
    return -1;
  }

  if (age < 0) {
    std::cerr << "No negative allowed" << '\n';
    return -1;
  }

  std::cout << age << '\n';

  // standard notation for log msgs
  std::clog << "[LOG] Age process success." << '\n';

  std::string name("Jhon");
  age = 7;
  double gpa = 3.178, pi = 3.147894374;

  std::cout << "== Precision == " << '\n';
  // setprecision param equals total digits displayed
  std::cout << "Pi = " << std::setprecision(3) << pi << '\n';
  // fixed keeps the integer part intact, only affecting the decimal portion
  std::cout << "Pi = " << std::fixed << std::setprecision(2) << pi << '\n';

  std::cout << std::defaultfloat << std::setprecision(6);

  std::cout << "== Record == " << '\n';
  std::cout << std::setfill('-') << std::setw(40) << '\n';
  std::cout << std::setfill(' '); // restore fill char

  std::cout 
    << std::setw(20) << std::left << "Name"
    << std::setw(6) << std::right << "Age"
    << std::setw(12) << std::right << "Gpa"
    << '\n';

  std::cout
    << std::setw(20) << std::left << name
    << std::setw(6) << std::right << age
    << std::setw(12) << std::right 
      << std::fixed << std::setprecision(2) << pi
    << '\n';

  std::cout << std::setfill('-') << std::setw(40) << '\n';

  int n = 8;
  std::cout << std::setfill(' ');
  // decimal printing
  std::cout << std::dec << n << '\n';
  // hexadecimal printing
  std::cout << std::hex << n << '\n';
  // hexadecimal printing
  std::cout << std::oct << n << '\n';

  return 0;
}
