#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream in_stream;
  char character, letter;
  int numberOfCharacter;

  cout.setf(ios::left);
  cout.width(19);
  cout << "CHARACTER" << "OCCURRENCES" << endl << endl;

  for (letter = 'a'; letter <= 'z'; letter++) {
    in_stream.open("question5.cpp");
    numberOfCharacter = 0;
    cout.width(19);
    cout << letter;
    in_stream >> character;
    while (!in_stream.eof()) {
      if (character == letter) {
        numberOfCharacter++;
      }
      in_stream >> character;
    }
    cout << numberOfCharacter << endl;
    in_stream.close();
  }
  return 0;
}
