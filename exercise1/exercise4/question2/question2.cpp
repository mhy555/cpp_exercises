#include <iostream>
#include <fstream>

using namespace std;

/*
  This program output its own source file to a new file and to the screen
*/

void outputSourceFile();

int main() {
  cout << "Testing: " << 16/2 << " = " << 4*2 << ".\n\n";
  
  outputSourceFile();
  return 0;
}

void outputSourceFile() {
  char character;
  bool inComment = false;
  ifstream in_stream;
  ofstream out_stream;

  in_stream.open("question2.cpp");
  out_stream.open("WithoutComments.cpp");

  in_stream.get(character);
  while(!in_stream.eof()) {
    if (!inComment) {
      if (character == '/') {
	in_stream.get(character);
	if (character == '*') {
	  inComment = true;
	  in_stream.get(character);
	  continue;
	} else {
	  in_stream.putback(character);
	  in_stream.putback('/');
	  in_stream.get(character);
	}
      }
    } else {
      if (character == '*') {
	in_stream.get(character);
	  if (character == '/') {
	    inComment = false;
	    in_stream.get(character);
	    continue;
	  } else {
	    in_stream.putback(character);
	    in_stream.putback('*');
	  }
      } else {
	in_stream.get(character);
	continue;
      }
    }
    cout << character;
    out_stream.put(character);
    in_stream.get(character);
  }

  out_stream.close();
  in_stream.close();
}
