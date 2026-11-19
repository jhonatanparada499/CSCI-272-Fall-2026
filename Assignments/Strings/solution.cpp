/**
 * solution.cpp
 *
 * Name: Jhonatan Parada
 * Course: CSCI 272
 * Assignment 2 - Strings
 * Date: 11-20-2026
 *
 */

#include <cctype>
#include <iostream>

using namespace std;

int main() {
  // asks name
  string fullName;
  cout << "Enter full name: ";
  getline(cin, fullName);

  // print name details
  cout << "Full name: " << fullName << '\n';
  cout << "Total chars: " << fullName.length() << '\n';
  cout << "First char: " << fullName.substr(0, 1) << '\n';
  cout << "Last char: " << fullName[fullName.length() - 1] << '\n';

  // add prefix
  fullName = "Mr./Ms. " + fullName;

  // add suffix
  fullName += " Jr.";

  cout << fullName << '\n';

  // part 2
  string sentence;
  cout << "Enter sentence: ";
  getline(cin, sentence);

  string word;
  cout << "Enter word to find: ";
  cin >> word;

  size_t wordIndex = sentence.find(word);
  if (wordIndex == string::npos) {
    cout << "Word not found" << '\n';
  } else {
    cout << wordIndex << '\n';
  }

  // extra credit (number of spaces in sentence)
  int spaceCount{0};
  for (const char &c : sentence) {
    if (c == ' ') {
      ++spaceCount;
    }
  }
  cout << "Spaces: " << spaceCount << '\n';

  // part 3
  string word1, word2;
  cout << "Enter two words: ";
  cin >> word1 >> word2;

  if (word1.length() != word2.length()) {
    cout << "Strings are not equal (case-insensitive)" << '\n';
  } else {
    for (int i = 0; i < word1.length(); ++i) {
      if (tolower(word1[i]) != tolower(word2[i])) {
        cout << "Strings are not equal (case-insensitive)" << '\n';
        break;
      }
    }
    cout << "Strings are equal (case-insensitive)" << '\n';
  }

  // part 4
  string sNum;
  cout << "Enter num: ";
  cin >> sNum;
  int num;
  num = stoi(sNum);

  int result = num * num;
  cout << "Multiplication: " << result << '\n';

  return 0;
}
