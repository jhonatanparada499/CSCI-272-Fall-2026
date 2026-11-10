#include <iomanip>
#include <fstream>
#include <iostream>
#include <limits>

using namespace std;

// using scoped enumeration
enum class RequestType {
  // one defined, the following autocompletes
  ZERO = 1,
  CREDIT,
  DEBIT,
  END
};

// get valid menu choice
RequestType getRequest(){
  int choice;

  while (true) {
    cout << "1 Zero balances" << '\n'
      << "2 Credit balances (negative)" << '\n'
      << "3 Debit balances (positive)" << '\n'
      << "4 End" << '\n'
      << "Choice: ";

    if (!(cin >> choice) && (cin.eof() || cin.bad())) {
      cout << "Invalid input, try again." << '\n';
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      return RequestType::END;
    }

    if (choice < 1 || choice > 4) {
      cout << "Invalid choice, try again." << '\n';
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      continue;
    }

    return static_cast<RequestType>(choice);
  }
}

// determines if a balance matches the requested category
bool shouldDisplay(RequestType request, double balance){
  return (request == RequestType::ZERO && balance == 0.00)
    || (request == RequestType::CREDIT && balance < 0.00)
    || (request == RequestType::DEBIT && balance > 0.00);
}

void outputLine (int account, const string& name, double balance){
  cout << left << setw(10) << account
               << setw(15) << name
      << right << setw(12) << fixed << setprecision(2)
                              << balance
                              << '\n';
}

int main() {
  const string INFILENAME = "clients.txt";
  ifstream inFile(INFILENAME);

  RequestType request = getRequest();

  while (request != RequestType::END) {
    // reset flags left by previous scans
    inFile.clear();

    // mv reading pos to beg
    inFile.seekg(0, ios::beg);
    if (!inFile) {
      cerr << "error: couldn't return to start of file." << '\n';
      return -1;
    }

    int account;
    string name;
    double balance;
    int matches = 0;

    cout << "Matching accounts: " << '\n';
    // read first; process successful extraction.
    while (inFile >> account >> name >> balance) {
      if (shouldDisplay(request, balance)) {
        outputLine(account, name, balance);
        ++matches;
      }
    }

    if (inFile.bad() || !inFile.eof()) {
      cerr << "Error reading file" << '\n';
      return -1;
    }

    cout << "Matches: " << matches << '\n';
    request = getRequest();
  }

  inFile.close();
  cout << "End of run" << '\n';

  const string OUTFILENAMECSV = "clients.csv";
  ofstream outFile(OUTFILENAMECSV);

  outFile << "account,name,balance" << '\n'
    << "100,Ana Lopez,125.50" << '\n'
    << "200,Ben Chen,-40.00" << '\n'
    << "300,Avijit Roy,-999.99" << '\n';

  outFile.close();

  const string INFILENAMECSV = "clients.csv";
  ifstream inFileCSV(INFILENAMECSV);

  string line;
  // skip header of csv
  getline(inFileCSV, line);

  // prints each record in csv file
  while (getline(inFileCSV, line)) {
    istringstream row(line);

    int account;
    char comma;
    string name;
    double balance;

    row >> account >> comma 
      >> name >> comma >> balance;

    // validate csv row
    // ...

    // skip trailing ws;
    row >> ws;

    // validate extra content with !row.eof()

    cout << account << " | "
      << name << " | "
      << balance << '\n';
  }


  return 0;
}
