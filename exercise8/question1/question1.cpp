#include <iostream>

using namespace std;

int fibonacci(int n);

int main() {
  cout << fibonacci(7) << endl;
  return 0;
}

int fibonacci(int n) {
  if (n > 2) {
    return fibonacci(n-1) + fibonacci(n-2);
  } else {
    return 1;
  }
}
