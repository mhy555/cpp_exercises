#include <iostream>
#include <cmath>
#include <iomanip>
#include "question1.h"
#include "functions.cpp"
using namespace std;

int main() {
  int lower = 0; /* the lowest Fahrenheit entry in the table */
  int upper = 0; /* the highest Fahrenheit entry in the table */
  int step = 1;  /* difference in Fahrenheit between entries */

  /* print a message explaining what the program does: */
  print_preliminary_message();
	
  /* prompt the user for table specifications in Fahrenheit: */
  input_table_specifications(lower, upper, step);
	
  /* print appropriate message including an echo of the input: */
  print_message_echoing_input(lower, upper, step);
	
  /* Print the table (including the column headings): */
  print_table(lower, upper, step);

  return 0;
}
/* END OF MAIN PROGRAM */


/* FUNCTION TO DISPLAY PRELIMINARY MESSAGE */
void print_preliminary_message() {
  cout << "This program prints out a conversion table of temperatuers." << endl << endl;
}
/* END OF FUNCTION */

void input_table_specifications(int& lower, int& upper, int& step) {
  cout << "Enter the minimum (whole number) temperature you want in the table, in Fahrenheit:";
  cin >> lower;

  cout << "Enter the maximum temperature you want in the table:";
  cin >> upper;

  cout << "Enter the temperature difference you want between table entries:";
  cin >> step;
  cout << endl;
}

void print_message_echoing_input(int lower, int upper, int step) {
  cout << "Tempertature conversion table from " << lower << " Fahrenheit to " << upper << " Fahrenheit, in steps of " << step << " Fahrenheit:" << endl << endl;
}

void print_table(int lower, int upper, int step) {
  int temp;
  cout << setiosflags ( ios :: left );
  cout.width(20);
  cout << "Fahrenheit";
  cout.width(20);
  cout << "Celsius" << "Absolute Value" << endl << endl;

  cout.setf(ios::fixed);
  cout.precision(2);
  
  for (temp = lower; temp <= upper; temp += step) {
    cout.width(20);
    cout << temp;
    cout.width(20);
    cout << celsius_of(temp);
    cout << absolute_value_of(temp) << endl;
  }
}
