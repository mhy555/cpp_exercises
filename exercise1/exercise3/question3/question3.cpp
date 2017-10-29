#include <iostream>
#include "statistics.h"

using namespace std;

void inputNumberOfValues(int& testNumber);
void testOneNumber();
void testTwoNumber();
void testThreeNumber();
void testFourNumber();

int main() {
  int testNumber = 0;
  
  cout << "This program tests the functions in the 'statistics.h' header file." << endl << endl;

  inputNumberOfValues(testNumber);
  
  for (; testNumber != 0;) {
    switch(testNumber) {
    case 1:
      testOneNumber();
      break;
    case 2:
      testTwoNumber();
      break;
    case 3:
      testThreeNumber();
      break;
    case 4:
      testFourNumber();
      break;
    default:
      cout << "Sorry, the program can only test 1, 2, 3 or 4 values." << endl << endl;
    }
    inputNumberOfValues(testNumber);
  }
  cout << "Finished testing 'statistics.h' header file." << endl;
  
  return 0;
}

void inputNumberOfValues(int& testNumber) {
   cout << "Do you wish to test 1, 2, 3 or 4 numbers (enter 0 to end the program): ";
   cin >> testNumber;
   cout << endl << endl;
}

void testOneNumber() {
  double first_value;
  cout << "Enter first value: ";
  cin >> first_value;
  cout << endl;
  cout << "Average: " << average(first_value) << ". Standard deviation: " << standard_deviation(first_value) << "." << endl << endl;
}

void testTwoNumber() {
  double first_value, second_value;
  cout << "Enter first value: ";
  cin >> first_value;
  cout << endl;
  cout << "Enter second value: ";
  cin >> second_value;
  cout << endl;
  cout << "Average: " << average(first_value, second_value) << ". Standard deviation: " << standard_deviation(first_value, second_value) << "." << endl << endl;
}

void testThreeNumber() {
  double first_value, second_value, third_value;
  cout << "Enter first value: ";
  cin >> first_value;
  cout << endl;
  cout << "Enter second value: ";
  cin >> second_value;
  cout << endl;
  cout << "Enter third value: ";
  cin >> third_value;
  cout << endl;
  cout << "Average: " << average(first_value, second_value, third_value) << ". Standard deviation: " << standard_deviation(first_value, second_value, third_value) << "." << endl << endl;
}

void testFourNumber() {
  double first_value, second_value, third_value, fourth_value;
  cout << "Enter first value: ";
  cin >> first_value;
  cout << endl;
  cout << "Enter second value: ";
  cin >> second_value;
  cout << endl;
  cout << "Enter third value: ";
  cin >> third_value;
  cout << endl;
  cout << "Enter forth value: ";
  cin >> fourth_value;
  cout << endl;
  cout << "Average: " << average(first_value, second_value, third_value, fourth_value) << ". Standard deviation: " << standard_deviation(first_value, second_value, third_value, fourth_value) << "." << endl << endl;
}
