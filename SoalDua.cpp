// Buatlah suatu program untuk menghitung operasi perkalian pada suatu matriks
// 3x3

#include <iostream>
using namespace std;

int main() {
  int matriks1[3][3] = {{10, 10, 10}, {10, 10, 10}, {10, 10, 10}};
  int matriks2[3][3] = {{10, 10, 10}, {10, 10, 10}, {10, 10, 10}};

  const int ukuran = 3;
  int hasil[ukuran][ukuran] = {0};

  for (int i = 0; i < ukuran; i++) {
    for (int j = 0; j < ukuran; j++) {
      for (int k = 0; k < ukuran; k++) {
        hasil[i][j] += matriks1[i][k] * matriks2[k][j];
      }
    }
  }

  cout << "Hasil perkalian kedua matriks adalah\n";
  for (int i = 0; i < ukuran; i++) {
    for (int j = 0; j < ukuran; j++) {
      cout << hasil[i][j] << " ";
    }
    cout << '\n';
  }

  return 0;
}