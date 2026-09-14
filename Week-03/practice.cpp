#include <iostream>
#include <vector>
using namespace std;

template <typename T>
T largeOf(T first, T second){
  // using ternary operator
  return (first > second) ? first : second;
}

void printVector(const vector<int>& theVector){
  // const needed here for reading and match vector const
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

  // vectors
  vector<int> v1 = {1,2,3};
  vector<int> v2(5,0);
  //first 2 using pointers as parameters
  vector<int> v3(v1.begin(), v1.begin() + 2);

  cout << "Last item: " << v1[2] << endl;
  v1.push_back(4);
  cout << "Last item: " << v1[3] << endl;
  // possible but not the best practice.
  cout << "One past Last item: " << v1[7] << endl;

  printVector(v1);
  printVector(v2);
  printVector(v3);

  return 0;
}
