#include <iostream>
#include <cmath>
using namespace std;

enum Logical {False, True};

Logical prime(int number);
Logical checkNumberValidation(int number);
void takeTheNumber(int& number);

int main() {
  int number;
  cout << "This program tells whether the input integer is a prime number.\n";
  takeTheNumber(number);
  if (!checkNumberValidation(number)) {
    cout << "Please enter a valid number\n";
    return 0;
  } else {
    if (prime(number)) {
      cout << "The number is a prime number\n";
    } else {
      cout << "The number is not a prime number\n";
    }
  }
  return 0;
}

Logical prime(int number) {
  int factor;
  double squareRoot = sqrt(number);
  for (factor = 2; factor <= squareRoot; factor++) {
    if (number % factor) {
      continue;
    } else {
      return False;
    }
  }
  return True;
}

Logical checkNumberValidation(int number) {
  if (number >= 1 && number <= 1000) {
    return True;
  } else {
    return False;
  }
}

void takeTheNumber(int& number) {
  cout << "Please enter a number: ";
  cin >> number;
}
