#include <iostream>
#include <fstream>

using namespace std;

int countNumber();
int countCharacter();

int main() {
  cout << "This program counts the numbers and characters in its own source file.\n";
  cout << "There are " << countNumber() << " numbers and " << countCharacter() << " characters.\n";
}

int countNumber() {
  int number;
  int count = 0;
  ifstream in_stream;
  
  in_stream.open("question3.cpp");
  in_stream >> number;
  while (!in_stream.eof()) {
    count++;
    in_stream >> number;
  }
  in_stream.close();
  return count;
}

int countCharacter() {
  char character;
  int count = 0;
  ifstream in_stream;

  in_stream.open("question3.cpp");
  in_stream >> std::noskipws;
  in_stream >> character;

  while (!in_stream.eof()) {
    count++;
    in_stream >> character;
  }
  in_stream.close();
  return count;
}

