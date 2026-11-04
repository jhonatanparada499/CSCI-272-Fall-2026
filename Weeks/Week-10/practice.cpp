#include <cstdio>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

const int LEFT_WIDTH = 10;
const int RIGHT_WIDTH = 10;

void outputLine(int theAccount, const string &theName, double theBalance);

int main() {
  // alias for basic_ofstream<char>
  const string FILENAME = "clients.txt";
  ofstream outFile(FILENAME, ios::app); // appends records
  if (!outFile) {
    cerr << "File not found." << '\n';
    return -1;
  }

  int account;
  string name;
  double balance;
  int count = 0;

  outFile << fixed << setprecision(2);

  cout << "Enter account, one-word name, and balance." << '\n';
  cout << "Press Control+D to finish." << '\n';

  while (cin >> account >> name >> balance) {
    outFile << account << " " << name << " " << balance << '\n';
    ++count;
  }

  outFile.close();
  if (!outFile) {
    cerr << "Error writing to file." << '\n';
    return -1;
  }

  cout << "Saved " << count << " record(s) to file." << '\n';

  ifstream inFile(FILENAME);
  cout << left << setw(LEFT_WIDTH) << "Account" << setw(RIGHT_WIDTH) << "Name"
       << "Balance" << '\n';
  while (inFile >> account >> name >> balance) {
    outputLine(account, name, balance);
  }

  return cin.eof() ? 0 : 1;
}

void outputLine(int theAccount, const string &theName, double theBalance) {
  cout << fixed << setprecision(2) << left << setw(LEFT_WIDTH) << theAccount
       << setw(RIGHT_WIDTH) << theName << theBalance << '\n';
}
