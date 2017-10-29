#include <iostream>
#include <iomanip>

using namespace std;

const int FIRST_ROW = 2;
const int FIRST_COLUMN = 2;
const int SECOND_COLUMN = 2;

void matrix_times_matrix(int firstNumberOfRows, int firstNumberOfColumns, int secondNumberOfColumns, int first_matrix[][FIRST_COLUMN], int second_matrix[][SECOND_COLUMN]);
void get_first_matrix(int numberOfRows, int numberOfColumns, int first_matrix[][FIRST_COLUMN]);
void get_second_matrix(int numberOfRows, int numberOfColumns, int second_matrix[][SECOND_COLUMN]);
void print_result(int first_matrix[][FIRST_COLUMN], int second_matrix[][SECOND_COLUMN], int result_matrix[][SECOND_COLUMN]);

int main() {
  int first_matrix[FIRST_ROW][FIRST_COLUMN];
  int second_matrix[FIRST_COLUMN][SECOND_COLUMN];
  get_first_matrix(FIRST_ROW, FIRST_COLUMN, first_matrix);
  get_second_matrix(FIRST_COLUMN, SECOND_COLUMN, second_matrix);
  matrix_times_matrix(FIRST_ROW, FIRST_COLUMN, SECOND_COLUMN, first_matrix, second_matrix);
  return 0;
}

void matrix_times_matrix(int firstNumberOfRows, int firstNumberOfColumns, int secondNumberOfColumns, int first_matrix[][FIRST_COLUMN], int second_matrix[][SECOND_COLUMN]) {
  int result_matrix[FIRST_ROW][SECOND_COLUMN];
  for (int i = 0; i < firstNumberOfRows; i++) {
    for (int n = 0; n < secondNumberOfColumns; n++) {
      int sum = 0;
      for (int j = 0; j < firstNumberOfColumns; j++) {
        sum += first_matrix[i][j] * second_matrix[j][n];
      }
      result_matrix[i][n] = sum;
    }
  }
  print_result(first_matrix, second_matrix, result_matrix);
}

void print_result(int first_matrix[][FIRST_COLUMN], int second_matrix[][SECOND_COLUMN], int result_matrix[][SECOND_COLUMN]) {
  cout << setiosflags ( ios :: left );
  for (int i = 0; i < FIRST_ROW; i++) {
    cout.width(10);
    cout << " ";
    for (int j = 0; j < FIRST_COLUMN; j++) {
      cout.width(10);
      cout << first_matrix[i][j];
    }
    cout << endl;
  }
  cout << "TIMES\n";
  for (int i = 0; i < FIRST_COLUMN; i++) {
    cout.width(10);
    cout << " ";
    for (int j = 0; j < SECOND_COLUMN; j++) {
      cout.width(10);
      cout << second_matrix[i][j];
    }
    cout << endl;
  }
  cout << "EQUALS\n";
  for (int i = 0; i < FIRST_ROW; i++) {
    cout.width(10);
    cout << " ";
    for (int j = 0; j < SECOND_COLUMN; j++) {
      cout.width(10);
      cout << result_matrix[i][j];
    }
    cout << endl;
  }
}

void get_first_matrix(int numberOfRows, int numberOfColumns, int first_matrix[][FIRST_COLUMN]) {
  cout << "INPUT FIRST (2x2) MATRIX:\n";
  for (int i = 0; i < numberOfRows; i++) {
    cout << "Type in " << numberOfColumns << " values for row " << i + 1 << " separated by spaces: ";
    for (int j = 0; j < numberOfColumns; j++) {
      cin >> first_matrix[i][j];
    }
    cout << endl;
  }
}

void get_second_matrix(int numberOfRows, int numberOfColumns, int second_matrix[][SECOND_COLUMN]) {
  cout << "INPUT SECOND (2x2) MATRIX:\n";
  for (int i = 0; i < numberOfRows; i++) {
    cout << "Type in " << numberOfColumns << " values for row " << i + 1 << " separated by spaces: ";
    for (int j = 0; j < numberOfColumns; j++) {
      cin >> second_matrix[i][j];
    }
    cout << endl;
  }
}
