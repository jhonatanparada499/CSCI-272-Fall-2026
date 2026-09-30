#include <iostream>
#include <string>
using namespace std;

template <typename T>
bool isBetween(T value, T low, T high){
  if ((low<=value) && (value<=high)) return true;
  return false;
}

string getBoolStr(bool expression){
  return (expression) ? "true" : "false";
}

int main() {
  cout << "7 between 1 and 10? "
      << getBoolStr(isBetween(7, 1, 10)) << '\n';

  cout << "12 between 1 and 10? "
      << getBoolStr(isBetween(12, 1, 10)) << '\n';

  cout << "c between a and f? "
      << getBoolStr(isBetween('c', 'a', 'f')) << '\n';

  return 0;
}

// REFLECTION
// While writing the definition of isBetwee, I noticed my IDE 
// was saying that 'X<=Y<=Z' did not behave like math.
// So I read that the expression is treated like (X<=Y) <= Z
// The first expression return either 1 or 0. So, it must be 
// written as (A<=Y) && (Y<=Z)
