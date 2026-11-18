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

public:
  Student(string theName, Date theBOD) : name(theName), dob(theBOD) {};

  void displayInfo() {
    cout << "Name: " << name << '\n';
    cout << "DOB: " << dob.toString() << '\n';
  }
};

int main() {
  Date dob(11, 21, 2005);
  Student s1("Jhon", dob);
  s1.displayInfo();

  return 0;
}
