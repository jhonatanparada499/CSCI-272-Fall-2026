#include <iomanip>
#include <iostream>
#include <istream>
#include <ostream>
#include <string>
using namespace std;

class Card {
public:
  int cardNumber;
  string cardHolder;
};

typedef Card* CardPtr ;

ostream& cprint = cout;

int main(){
  // rename cout obj to cprint
  istream& cinput = cin;

  Card myCard;
  myCard.cardNumber = 1;
  myCard.cardHolder = "Alan";

  CardPtr ptrToCard = &myCard;

  cprint << "he" << '\n';

  cout << ptrToCard->cardHolder << '\n';
  cout << ptrToCard->cardNumber << '\n';

  // cout truncates pi up to 5 digits (by default)
  double pi = 3.14938293289;
  // truncates pi to 6 digits here
  string val = to_string(pi);

  const char *constCharPtr = val.c_str();

  // print 10 chars (if available)
  cout.write(constCharPtr, 10);

  // print 1 char at time
  cout.put('\n');
  //
  cout << scientific << setprecision(3);

  cout << pi << '\n';

}
