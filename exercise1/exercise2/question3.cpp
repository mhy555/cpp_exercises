#include <iostream>
using namespace std;

int main() {
  char character;
  int intChar, resultChar;
  cout << "Please enter a character:\n";
  cin >> character;
  intChar = static_cast<int>(character);
  if (intChar >= 97 && intChar <= 122) {
    resultChar = intChar - 32;
    cout << "The upper case character corresponding to " << character << " is " << char(resultChar) << "\n";
  } else if (intChar >= 65 && intChar <= 90) {
    resultChar = intChar + 32;
    cout << "The lower case character corresponding to " << character << " is " << char(resultChar) << "\n";
  } else {
    cout << character << " is not a letter.\n";
  }
  return 0;
}
