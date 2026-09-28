#include <iostream>
#include <string>

using namespace std;

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
