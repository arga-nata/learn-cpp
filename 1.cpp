// Buatlah suatu program untuk menghitung operasi penjumlahan pada suatu matriks
// 3x3

#include <iostream>
using namespace std;

int main() {
  int matriks1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int matriks2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

  int baris = sizeof(matriks1) / sizeof(matriks1)[0];
  int kolom = sizeof(matriks1)[0] / sizeof(matriks1)[0][0];

  int hasil1[3][3];

  for (int i = 0; i < baris; i++) {
    for (int j = 0; j < kolom; j++) {
      hasil1[i][j] = matriks1[i][j] + matriks2[i][j];
    }
  }
  for (int i = 0; i < baris; i++) {
    for (int j = 0; j < kolom; j++) {
      cout << hasil1[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}