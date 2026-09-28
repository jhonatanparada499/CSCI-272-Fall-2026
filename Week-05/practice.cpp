#include <iostream>
#include <string>
 // header to include char manipulation funcs
#include <cctype>

using namespace std;

bool equalsIgnoreCase(
    const string& first,
    const string& second);

int main(){
  string sentece = "The quick brown fox jumps over the laxy dog.";
  string vowels = "aeiou";

  size_t foundFirst = sentence.find_first_of(vowels);

  if (foundFirst == string::npos) {
    cout << "No vowel found" << endl;
    return -1;
  }

  cout << "char found at: " << foundFirst << '\n';

  string ageTxt = "25";
  string gpaTxt = "3.75";
  int age = stoi(ageTxt);
  int gpa = stod(gpaTxt);
  cout << age + gpa << '\n';

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
