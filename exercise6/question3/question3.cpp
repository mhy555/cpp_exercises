#include <iostream>
#include <cstring>

using namespace std;

const int MAX_STRING_LENGTH = 100;

void no_repetitions(char inputString[]);
bool appeared_previously(char inputString[], char character, int position);
void remove_repetitions(char inputString[], int index);

int main() {
  char inputString[MAX_STRING_LENGTH];
  cout << "Type in a string: ";
  cin.getline(inputString, MAX_STRING_LENGTH);
  cout << endl;
  no_repetitions(inputString);
  cout << "The string without repetitions is: " << inputString << endl;
  return 0;
}

void no_repetitions(char inputString[]) {
  for (int count = strlen(inputString) - 1; count >= 0; count--) {
    if (appeared_previously(inputString, inputString[count], count)) {
      remove_repetitions(inputString, count);
    }
  }
}

bool appeared_previously(char inputString[], char character, int position) {
  for (int count = 0; count < position; count++) {
    if (inputString[position] == inputString[count]) {
      return true;
    }
  }
  return false;
}

void remove_repetitions(char inputString[], int index) {
  int count;
  for (count = index; inputString[count] != '\0'; count++) {
    inputString[count] = inputString[count + 1];
  }
}
