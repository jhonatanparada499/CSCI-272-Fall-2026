#include <iostream>
#include <string>

using namespace std;

bool equalsIgnoreCase(const string& first, const string& second);

int main(){
  string email;

  cout << "Enter email: ";
  getline(cin >> ws, email);

  size_t atPos = email.find('@');

  if (atPos == string::npos) {
    cout << "Invalid email" << endl;
    return -1;
  }

  string username = email.substr(0,atPos);
  string domain = email.substr(atPos+1);

  cout << "User: " << username << '\n';
  cout << "Domain: " << domain << '\n';

  return 0;
}

bool equalsIgnoreCase(const string& first, const string& second){
  if (first.length() != second.length()) {
    return false;
  }

  for (size_t i = 0; i < first.length(); i++) {
    if (tolower(first[i]) != tolower(second[i])) {
      return false;
    }
  }

  return true;
}
