#include <iostream>
using namespace std;

int main() {
  double number, answer;
  int power, count;

  cout << "This program raises a number x to a non-negative integer power n." << endl << endl;
  cout << "Please enter a number:" << endl;
  cin >> number;

  cout << "Please enter a positive power you want the number to be raised:" << endl;
  cin >> power;

  answer = 1;
  for (count = 0; count < power; count++) {
    answer *= number;
  }

  cout << "The answer is " << answer << endl;
  
  return 0;
}


