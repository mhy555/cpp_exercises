/* Header file "question1.h" */

#ifndef QUESTION1_H
#define QUESTION1_H

double celsius_of(int fahr);
double absolute_value_of(int fahr);
void print_preliminary_message();
void input_table_specifications(int& lower, int& upper, int& step);
void print_message_echoing_input(int lower, int upper, int step);
void print_table(int lower, int upper, int step);

#endif
