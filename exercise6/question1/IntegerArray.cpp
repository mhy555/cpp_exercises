#include <iostream>
#include <cmath>

using namespace std;

void input_array(int arr[], int number) {
  int count, value;
  for (count = 0; count < number; count++) {
    cout << "Please enter a value: ";
    cin >> value;
    cout << endl;
    arr[count] = value;
  }
}

void display_array(int arr[], int number) {
  for (int count = 0; count < number; count++) {
    cout << arr[count] << " ";
  }
}

void copy_array(int arr1[], int arr2[], int number) {
  for (int count = 0; count < number; count++) {
    arr1[count] = arr2[count];
  }
}

double standard_deviation(int arr[], int number) {
  double sum = 0, powSum = 0;
  double average;
  for (int count = 0; count < number; count++) {
    sum += arr[count];
  }
  average = sum / static_cast<double>(number);
  for (int count = 0; count < number; count++) {
    powSum += pow((arr[count] - average), 2);
  }
  return sqrt(powSum / number);
}
