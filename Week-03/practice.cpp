#include <iostream>
#include <vector>
using namespace std;

template <typename T>
T largeOf(T first, T second){
  // using ternary operator
  return (first > second) ? first : second;
}

void printVector(const vector<int>& theVector){
  for (const int& val : theVector){
    cout << val << " ";
  }
    cout << endl;
}

int main(){

  int i1 = 10, i2 = 20;
  double d1 = 10, d2 = 20;
  string s1 = "i1", s2 = "A";

  cout << "Larger int: " << largeOf(i1,i2) << endl;
  cout << "Larger double: " << largeOf(d1,d2) << endl;
  cout << "Larger string: " << largeOf(s1,s2) << endl;

  return 0;
}
