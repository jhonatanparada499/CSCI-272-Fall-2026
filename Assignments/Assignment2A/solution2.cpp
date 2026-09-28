#include <iostream>
#include <vector>
using namespace std;

double getAverage(const vector<int>& theVector);
int getHighest(const vector<int>& theVector);

int main() {
  vector<int> student_ids = {
    1,2,3,4,5,
    6,7,8,9,10
  };

  cout << "Average ID: "
        << getAverage(student_ids) << '\n';

  cout << "highest ID: "
      << getHighest(student_ids) << '\n';


  return 0;
}

double getAverage(const vector<int>& theVector){
  // -1 in this context means: undefined
  if (theVector.empty()) return -1;

  double average = 0.0;
  for (const int& num : theVector){
    average += num;
  }

  average /= theVector.size();
  return average;
}

int getHighest(const vector<int>& theVector){
  // -1 in this context means: undefined
  if (theVector.empty()) return -1;

  int highest = theVector[0];
  for (size_t i=1; i < theVector.size(); ++i){
    if (theVector[i] > highest){
      highest = theVector[i];
    }
  }

  return highest;
}
