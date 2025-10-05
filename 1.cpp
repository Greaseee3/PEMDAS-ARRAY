#include <iostream>
using namespace std;

int main() {
  int i, j;
  int data1[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };
  int data2[3][3] = {
    {9, 8, 7},
    {6, 5, 4},
    {3, 2, 1}
  };

  int hasil1[3][3];
  int hasil2[3][3];

  int baris = 3;
  int kolom = 3;

  cout << "Penjumlahan\n";
  for (i = 0; i < baris; i++) {
    for (j = 0; j < kolom; j++) {
      hasil1[i][j] = data1[i][j] + data2[i][j];
      cout << hasil1[i][j] << "\t";
    }
    cout << endl;
  }

  cout << endl;

  cout << "Pengurangan\n";
  for (i = 0; i < baris; i++) {
    for (j = 0; j < kolom; j++) {
      hasil2[i][j] = data1[i][j] - data2[i][j];
      cout << hasil2[i][j] << "\t";
    }
    cout << endl;
  }

  return 0;
}