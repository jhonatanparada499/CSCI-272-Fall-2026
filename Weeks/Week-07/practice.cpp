#include <iostream>

int main() {
  int age{0};

  std::cout << "Enter age: ";
  if (!(std::cin >> age)) {
    std::cerr << "Invalid." << '\n';
  }

  std::cout << age << '\n';

  return 0;
}
