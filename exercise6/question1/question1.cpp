#include <iostream>
#include "IntegerArray.h"

using namespace std;

const int TEST_SIZE = 5;

int main() {
  int array[TEST_SIZE];
  int array2[TEST_SIZE];
  cout << "This program allows you to input values for the first n elements of the array, and will display all the elements and their standard deviation ont the screen\n";
  input_array(array, TEST_SIZE);
  copy_array(array2, array, TEST_SIZE);
  display_array(array2, TEST_SIZE);
  cout << "The standard deviation is: " << standard_deviation(array2, TEST_SIZE) << endl;
  return 0;
}
