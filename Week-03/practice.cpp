#include <iostream>
using namespace std;

template <typename T>
T largeOf(T first, T second){
  return (first > second) ? first : second;
}

int main(){

  int a = 10, b = 20;
  double c = 10, d = 20;

  cout << "int: " << largeOf(a,b) << endl;
  cout << "double: " << largeOf(c,d) << endl;

  return 0;
}
