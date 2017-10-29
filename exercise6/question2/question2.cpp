#include <iostream>

using namespace std;

const int MAX_STRING_LENGTH = 100;

void string_sort(char inputString[]);
int minimum_from(char inputString[], int position);
void swap(char& first, char& second);

int main() {
  char inputString[MAX_STRING_LENGTH];
  cout << "Type in a string: ";
  cin.getline(inputString, MAX_STRING_LENGTH);
  cout << endl;
  string_sort(inputString);
  cout << "The sorted string is: " << inputString << endl;
  return 0;
}

void string_sort(char inputString[]) {
  int count = 0;
  while (inputString[count] != '\0') {
    swap(inputString[count], inputString[minimum_from(inputString, count)]);
    count++;
  }
}

int minimum_from(char inputString[], int position) {
  int min_index = position;
  int count = position;

  while (inputString[count] != '\0') {
    if (inputString[count] < inputString[min_index]) {
      min_index = count;
    }
    count++;
  }
  return min_index;
}

void swap(char& first, char& second) {
  char temp = first;
  first = second;
  second = temp;
}
