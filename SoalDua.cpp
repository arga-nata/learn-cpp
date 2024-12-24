// Buatlah suatu program untuk menghitung operasi perkalian pada suatu matriks
// 3x3

#include <iostream>
using namespace std;

int main() {
  int matriks1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int matriks2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  const int ukuran = 3;
  int hasil[ukuran][ukuran] = {0};

  for (int i = 0; i < ukuran; i++) {
    for (int j = 0; j < ukuran; j++) {
      for (int k = 0; k < ukuran; k++) {
        hasil[i][j] += matriks1[i][k] * matriks2[k][j];
      }
    }
  }
  for (int i = 0; i < ukuran; i++) {
    for (int j = 0; j < ukuran; j++) {
      cout << hasil[i][j] << " ";
    }
    cout << '\n';
  }

  return 0;
}