#include <iostream>
using namespace std;

enum Day {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

int closing_time(Day day_of_the_week);
void print_day(Day day_of_the_week, ostream& cout);

	/* MAIN PROGRAM */
int main()
{
  int count;

  /* Print table heading */
  cout.setf(ios::left);
  cout.width(19);
  cout << "DAY";
  cout << "CLOSING TIME\n\n";

  /* Print table from Sunday to Saturday */
  for (count = static_cast<int>(Sun) ; count <= static_cast<int>(Sat) ; count++)
  {
    cout.width(19);
    print_day(static_cast<Day>(count), cout);
    // cout << static_cast<Day>(count);

    cout << closing_time(static_cast<Day>(count)) << "pm\n";
  }

  return 0;
}
/* END OF MAIN PROGRAM */

void print_day(Day day_of_the_week, ostream& cout)
{
  switch (day_of_the_week)
  {
    case Sun: cout << "Sunday"; break;
    case Mon: cout << "Monday"; break;
    case Tue: cout << "Tuesday"; break;
    case Wed: cout << "Wednesday"; break;
    case Thu: cout << "Thursday"; break;
    case Fri: cout << "Friday"; break;
    case Sat: cout << "Saturday"; break;
    default:	cout << "ERROR!";
  }
}

	/* FUNCTION TO GENERATE SHOP CLOSING TIMES FROM DAY OF THE WEEK */
int closing_time(Day day_of_the_week)
{
  switch (day_of_the_week) {
    case Sun: return 1;
    case Sat: return 5;
    case Wed: return 8;
    default: return 6;
  }
  return 5;
}
