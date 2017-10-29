#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
  int upper, lower, step;
  int fahrenheit;
  float celsius, absolute_value;

  cout << "This program shows table that convert temperatures among Fahrenheit, Celsius, and Absolute value\n";
  cout << "It starts at the lowest Fahrenheit temperature and increase with a step size and ends at the highest Fahrenheit.\n";
  cout << "Please tell it the lowest and highest Fahrenheit temperature you want it to display and also the step size.\n";

  cout << "Please enter the lowest Fahrenheit temperature:\n";
  cin >> lower;
  
  cout << "Please enter the highest Fahrenheit temperature:\n";
  cin >> upper;

  cout << "Please enter the step size:\n";
  cin >> step;
  
  cout << setiosflags ( ios :: left );
  cout.width(20);
  cout << "Fahrenheit";
  cout.width(20);
  cout << "Celsius" << "Absolute Value\n\n";

  cout.setf(ios::fixed);
  cout.precision(2);
  for (fahrenheit = lower; fahrenheit <= upper; fahrenheit = fahrenheit + step) {
    celsius = (float(fahrenheit) - 32) * 5 / 9;
    absolute_value = celsius + 273.15;
    cout.width(20);
    cout << fahrenheit;
    cout.width(20);
    cout << celsius << absolute_value << "\n";
  }
  return 0;
}
