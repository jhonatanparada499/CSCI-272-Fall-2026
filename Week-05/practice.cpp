#include <iostream>
#include <string>
 // header to include char manipulation
#include <cctype>

using namespace std;

bool equalsIgnoreCase(const string& first, const string& second);

int main(){
  string email;
  string passwd = "Hello";
  string passwd2 = "Hello";
  string message1 = "Hello, World!";

  cout << "Before: " << message1 << '\n';

  for(auto& c : message1){
    c = toupper(c);
  }

  cout << "After: " << message1 << '\n';

  message1.replace(
      message1.find("WORLD"),
      message1.find("!"),
      "C++"
      );


  cout << "Replacement: " << message1 << '\n';

  message1.insert( 7, "Awesome ");

  cout << "Inserting: " << message1 << '\n';

  if(equalsIgnoreCase(passwd, passwd2)){
    cout << "Equal" << '\n';
  } else {
    cout << "Not Equal" << '\n';
  }

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
