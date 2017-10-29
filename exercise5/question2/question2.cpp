#include <iostream>

using namespace std;

void takeHeightInput(int& height);
void printThePyramid(int height);

int main() {
  int height;
  cout << "This program prints a 'pyramid' shape of a specified height on the screen.\n";
  takeHeightInput(height);
  printThePyramid(height);
  return 0;
}

void takeHeightInput(int& height) {
  cout << "How high would you like the pyramid?: ";
  cin >> height;
  cout << endl;
  while (height < 1 || height > 30) {
    cout << "Pick another height (must be between 1 and 30): ";
    cin >> height;
    cout << endl;
  }
}

void printThePyramid(int height) {
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < height * 2; j++) {
      if (j < height - 1 - i || j > height + i) {
        cout << " ";
      } else {
        cout << "*";
      }
    }
    cout << endl;
  }
  cout << endl;
}
