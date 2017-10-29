#include <iostream>
#include <fstream>

using namespace std;

int mian() {
  char character;
  ifstream in_stream;
  in_stream.open("question1.cpp");

  in_stream.get(character);
  
  return 0;
}
