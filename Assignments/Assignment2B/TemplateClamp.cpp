#include <iostream>
using namespace std;

template <typename T>
T clampValue(T value, T low, T high){
  if (value  < low) {
    return low;
  } else if(value > low){
    return high;
  }
  return value;
}

int main() {
  int clampedInt = clampValue(123, 0, 100);
  double clampedDouble = clampValue(-3.5, 0.0, 10.0);
  char clampedChar = clampValue('z', 'a', 'f');

  cout << "Clamp int: " << clampedInt << '\n';
  cout << "Clamp double: " << clampedDouble << '\n';
  cout << "Clamp char: " << clampedChar << '\n';

  return 0;
}
