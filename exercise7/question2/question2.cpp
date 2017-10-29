#include <iostream>
#include <cstring>

using namespace std;

const int MAX_STRING_SIZE = 100;

bool compareString(char firstString[], char secondString[]);

int main() {
  char firstString[MAX_STRING_SIZE];
  char secondString[MAX_STRING_SIZE];
  cout << "This program compare the two strings and return true if the first string is smaller, false otherwise.\n";
  cout << "Please enter the first string: ";
  cin.getline(firstString, MAX_STRING_SIZE);
  cout << endl << "Please enter the second string: ";
  cin.getline(secondString, MAX_STRING_SIZE);
  cout << endl;
  if (compareString(firstString, secondString)) {
    cout << "True";
  } else {
    cout << "False";
  }
  cout << endl;
  return 0;
}

// bool compareString(char firstString[], char secondString[]) {
//   int count = 0;
//   while (firstString[count] != '\0' && secondString[count] != '\0') {
//     if (firstString[i] < secondString[i]) {
//       return true;
//     } else if (firstString[i] > secondString[i]) {
//       return false;
//     }
//     count++;
//   }
//   if (firstString[count] == '\0' && secondString[count] != '\0') {
//     return true;
//   } else {
//     return false;
//   }
// }

bool compareString(char *firstString, char *secondString) {
  while (*firstString != '\0' && *secondString != '\0') {
    if (*firstString < *secondString) {
      return true;
    } else if (*firstString > *secondString) {
      return false;
    }
    firstString++;
    secondString++;
  }
  if (*firstString == '\0' && *secondString != '\0') {
    return true;
  } else {
    return false;
  }
}
