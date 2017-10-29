/* Program 7.5.1 from C++ Programming Lecture notes  */

/* Author: Rob Miller and William Knottenbelt
   Program last changed: 28th September 2013    */

/* This program creates and prints out a linked list of strings. */

#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

const int MAX_WORD_LENGTH = 80;

/* definition of a node */
struct Node;
typedef Node *Node_ptr;

struct Node
{
	char word[MAX_WORD_LENGTH];
	Node_ptr ptr_to_next_node;
};

/* Function to assign a linked list to "a_node" */
void assign_list(Node_ptr &a_list);

/* Function to assign a new dynamic node variable to "a_node" */
void assign_new_node(Node_ptr &a_node);

/* Function to print the strings in the list "a_node" */
void print_list(Node_ptr a_node);

void add_after(Node_ptr &list, char a_word[], char word_after[]);

void get_after_word(char a_word[], char word_after[]);

void get_delete_word(char a_word[]);

void delete_node(Node_ptr &a_list, char a_word[]);

bool compareString(char *firstString, char *secondString);

void list_selection_sort(Node_ptr &a_list);

void swap_node(Node_ptr &first_node, Node_ptr &second_node);

void swap_node(Node_ptr &previous_node, Node_ptr &first_node, Node_ptr &second_node);

/* MAIN PROGRAM */
int main()
{
	Node_ptr my_list = NULL;
  char add_word[MAX_WORD_LENGTH], word_after[MAX_WORD_LENGTH], delete_word[MAX_WORD_LENGTH];

	assign_list(my_list);

	cout << "\nTHE LIST IS NOW:\n";
	print_list(my_list);
	cout << endl << endl;

  get_after_word(add_word, word_after);

  add_after(my_list, add_word, word_after);

	cout << "\nTHE LIST IS NOW:\n";
	print_list(my_list);
	cout << endl << endl;

	get_delete_word(delete_word);

	delete_node(my_list, delete_word);

	cout << "\nTHE LIST IS NOW:\n";
	print_list(my_list);
	cout << endl << endl;

	list_selection_sort(my_list);

	cout << "AFTER SORTING, THE LIST IS: \n";
	print_list(my_list);
	cout << endl;

	return 0;
}
/* END OF MAIN PROGRAM */

void get_after_word(char a_word[], char word_after[]) {
  cout << "AFTER WHICH WORD WOULD YOU LIKE TO ADD AN EXTRA WORD? ";
  cin >> a_word;
  cout << endl;
  cout << "WHICH WORD WOULD YOU LIKE TO ADD? ";
  cin >> word_after;
  cout << endl;
}

void get_delete_word(char a_word[]) {
	cout << "WHICH WORD WOULD YOU LIKE TO DELETE? ";
	cin >> a_word;
	cout << endl;
}

void add_after(Node_ptr &list, char a_word[], char word_after[]) {
	Node_ptr new_node, current_node = list;
	assign_new_node(new_node);
	strcpy(new_node->word, word_after);
  while(current_node != NULL) {
    if (!strcmp(current_node->word, a_word)) {
      new_node->ptr_to_next_node = current_node->ptr_to_next_node;
      current_node->ptr_to_next_node = new_node;
			return;
    }
		current_node = current_node->ptr_to_next_node;
  }
	delete new_node;
}

void delete_node(Node_ptr &a_list, char a_word[]) {
	Node_ptr d_node, current_node = a_list;
	if (!strcmp(current_node->word, a_word)) {
		a_list = current_node->ptr_to_next_node;
		delete current_node;
		return;
	}
	while (current_node->ptr_to_next_node != NULL) {
		if (!strcmp(current_node->ptr_to_next_node->word, a_word)) {
			d_node = current_node->ptr_to_next_node;
			current_node->ptr_to_next_node = d_node->ptr_to_next_node;
			delete d_node;
			return;
		}
		current_node = current_node->ptr_to_next_node;
	}
}

Node_ptr minimum_from(Node_ptr &a_list) {
	Node_ptr current_node = a_list, min_node = a_list;
	while (current_node != NULL) {
		if (compareString(current_node->word, min_node->word)) {
			min_node = current_node;
		}
		current_node = current_node->ptr_to_next_node;
	}
	return min_node;
}

void list_selection_sort(Node_ptr &a_list) {
	Node_ptr current_node = a_list;
	while (current_node != NULL) {
		swap(current_node->word, minimum_from(current_node)->word);
		current_node = current_node->ptr_to_next_node;
	}
}

void swap(char* first_word, char* second_word) {
	char temp_word[512];
	strcpy(temp_word, first_word);
	strcpy(first_word, second_word);
	strcpy(second_word, temp_word);
}

void swap_node(Node_ptr &first_node, Node_ptr &second_node) {
	first_node->ptr_to_next_node = second_node->ptr_to_next_node;
	second_node->ptr_to_next_node = first_node;
}

void swap_node(Node_ptr &previous_node, Node_ptr &first_node, Node_ptr &second_node) {
	first_node->ptr_to_next_node = second_node->ptr_to_next_node;
	second_node->ptr_to_next_node = first_node;
	previous_node->ptr_to_next_node = second_node;
}

bool compareString(char firstString[], char secondString[]) {
  int count = 0;
  while (firstString[count] != '\0' && secondString[count] != '\0') {
    if (firstString[count] < secondString[count]) {
      return true;
    } else if (firstString[count] > secondString[count]) {
      return false;
    }
    count++;
  }
  if (firstString[count] == '\0' && secondString[count] != '\0') {
    return true;
  } else {
    return false;
  }
}

/* DEFINITION OF FUNCTION "assign_list" */
void assign_list(Node_ptr &a_list)
{
	Node_ptr current_node, last_node;

	assign_new_node(a_list);
	cout << "Enter first word (or '.' to end list): ";
	cin >> a_list->word;
	if (!strcmp(".",a_list->word))
	{
		delete a_list;
		a_list = NULL;
	}
	current_node = a_list;

	while (current_node != NULL)
	{
		assign_new_node(last_node);
		cout << "Enter next word (or '.' to end list): ";
		cin >> last_node->word;
		if (!strcmp(".",last_node->word))
		{
			delete last_node;
			last_node = NULL;
		}
		current_node->ptr_to_next_node = last_node;
		current_node = last_node;
	}

}
/* END OF FUNCTION DEFINITION */

/* DEFINITION OF FUNCTION "assign_new_node" */
void assign_new_node(Node_ptr &a_node)
{
        a_node = new (nothrow) Node;
	if (a_node == NULL)
	{
		cout << "sorry - no more memory\n";
		exit(1);
	}
}
/* END OF FUNCTION DEFINITION */

/* DEFINITION OF FUNCTION "print_list" */
void print_list(Node_ptr a_node)
{
	while (a_node != NULL)
	{
		cout << a_node->word << " ";
		a_node = a_node->ptr_to_next_node;
	}
}
/* END OF FUNCTION DEFINITION */
