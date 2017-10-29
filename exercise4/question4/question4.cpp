#include <iostream>
#include <fstream>

using namespace std;

int getNumberOfCharacters();
char getCharacterAtPosition(int number);

int main() {
  int number = getNumberOfCharacters();
  for (int n = number - 1; n >= 0; n--) {
    cout << getCharacterAtPosition(n);
  }
  cout << endl;
  return 0;
}

int getNumberOfCharacters() {
  char character;
  int count = 0;
  ifstream in_stream;

  in_stream.open("question4.cpp");
  in_stream >> std::noskipws;
  in_stream >> character;

  while (!in_stream.eof()) {
    count++;
    in_stream >> character;
  }

  return count;
}

char getCharacterAtPosition(int number) {
  char character;
  int count;
  ifstream in_stream;

  in_stream.open("question4.cpp");
  in_stream >> std::noskipws;
  in_stream >> character;

  for (count = 0; count < number; count++) {
    in_stream >> character;
  }
  return character;
}
