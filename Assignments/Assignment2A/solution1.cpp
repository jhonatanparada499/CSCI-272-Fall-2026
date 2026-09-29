#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<string> menu;
  menu.push_back("Roast Chicken");
  menu.push_back("Garlic Spaghetti");
  menu.push_back("Chorizo");
  menu.push_back("Beef Enchiladas");
  menu.push_back("Cauliflower Cheese");

  menu.insert(menu.begin() + 1, "Carbonara");

  menu.erase(menu.begin() + 3);

  for (string &dish : menu) {
    cout << dish << '\n';
  }

  return 0;
}

// Reflection
// ints are not accepted in insert,
// rather the function takes an iterator
// as first arg
