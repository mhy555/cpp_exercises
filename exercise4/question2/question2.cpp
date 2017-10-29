#include <iostream>
#include <fstream>

using namespace std;

void outputSourceFile();

int main() {
  cout << "Testing: " << 16/2 << " = " << 4*2 << ".\n\n";
  outputSourceFile();
  return 0;
}

void outputSourceFile() {
  char character;
  bool inComments = false;
  ifstream in_stream;
  ofstream out_stream;

  in_stream.open("question2.cpp");
  out_stream.open("WithoutComments.cpp");

  in_stream.get(character);
  while (!in_stream.eof()) {
    if (!inComments) {
      if (character == '/') {
        in_stream.get(character);
        if (character == '*') {
          inComments = true;
          in_stream.get(character);
          continue;
        }
      }
      cout << character;
      out_stream.put(character);
      in_stream.get(character);
    } else {
      if ()
    }
  }
  out_stream.close();
  in_stream.close();
}
