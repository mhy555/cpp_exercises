#include <iostream>
#include <fstream>

using namespace std;

int main() {
  char character;
  ifstream in_stream;

  in_stream.open("question1.cpp");
  while (!in_stream.eof()) {
    cout << character;
    in_stream.get(character);
  }

  in_stream.close();

  return 0;
}
