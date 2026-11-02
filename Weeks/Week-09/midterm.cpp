#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
private:
  string name;
  vector<double> scores;

public:
  Student(string theName, vector<double> theScores) {
    name = theName;
    scores = theScores;
  }

  double average() const {
    double sum;

    for (double score : scores) {
      sum += score;
    }

    return sum / scores.size();
  }

  void display() const {
    cout << fixed << setprecision(2);

    cout << "Student: " << name << '\n';
    cout << "Scores: ";
    for (const double &score : scores) {
      cout << score << " ";
    }
    cout << '\n';

    cout << "Average: " << average() << '\n';
  }
};

int main() {
  string name;
  string scoreLine;
  vector<double> scores;

  cout << "Enter name: ";
  getline(cin, name);

  cout << "Enter scores: ";
  getline(cin, scoreLine);
  if (scoreLine.empty()) {
    cerr << "Entered space." << '\n';
    return -1;
  }

  stringstream ssScores(scoreLine);
  double currScore;
  while (ssScores >> currScore) {
    scores.push_back(currScore);
  }

  Student s1(name, scores);
  s1.display();
  return 0;
}
