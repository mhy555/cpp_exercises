#include <cmath>

double average(double first_number) {
  return first_number;
}

double average(double first_number, double second_number) {
  return (first_number + second_number) / 2;
}

double average(double first_number, double second_number, double third_number) {
  return (first_number + second_number + third_number) / 3;
}

double average(double first_number, double second_number, double third_number, double fourth_number) {
  return (first_number + second_number + third_number + fourth_number) / 4;
}

double standard_deviation(double first_number) {
  return 0;
}

double standard_deviation(double first_number, double second_number) {
  double aver = average(first_number, second_number);
  return sqrt((pow((first_number - aver), 2) + pow((second_number - aver), 2)) / 2);
}

double standard_deviation(double first_number, double second_number, double third_number) {
  double aver = average(first_number, second_number, third_number);
  return sqrt((pow((first_number - aver), 2) + pow((second_number - aver), 2) + pow((third_number - aver), 2)) / 2);
}

double standard_deviation(double first_number, double second_number, double third_number, double fourth_number) {
  double aver = average(first_number, second_number, third_number, fourth_number);
  return sqrt((pow((first_number - aver), 2) + pow((second_number - aver), 2) + pow((third_number - aver), 2) + pow((fourth_number - aver), 2)) / 2);
}
