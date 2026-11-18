/**
 * practice-2.cpp
 */

#include <iostream>
#include <string>

using namespace std;

class Date {
private:
  int month;
  int year;
  int day;

public:
  Date() : month(0), year(0), day(0) {};

  Date(int theMonth, int theDay, int theyYear) {
    month = theMonth;
    day = theDay;
    year = theyYear;
  }

  // inplicit copy constructor
  // Date(const Date &theOther) {
  //   month = theOther.month;
  //   year = theOther.year;
  //   day = theOther.day;
  // }
  //
  string toString() {
    return to_string(month) + "/" + to_string(day) + "/" + to_string(year);
  }
};

class Student {
private:
  string name;
  Date dob;
  int score;

public:
  Student(string theName, Date theBOD) : name(theName), dob(theBOD) {};
  Student(string theName, int theScore) {
    this->name = theName;
    this->score = theScore;
    this->dob = Date();
  }

  Student &addBonus(int theBonus) {
    this->score += theBonus;

    return *this;
  }

  void displayInfo() {
    cout << "Name: " << name << '\n';
    cout << "DOB: " << dob.toString() << '\n';
    cout << "Score: " << this->score << '\n';
  }
};

int main() {
  Date dob(11, 21, 2005);
  Student s1("Jhon", dob);
  s1.displayInfo();

  Student s2("Marta", 21);
  s2.displayInfo();
  cout << "After bonus" << '\n';
  s2.addBonus(10).addBonus(5);
  s2.displayInfo();

  return 0;
}
