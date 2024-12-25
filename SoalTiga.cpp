// Berikan contoh program yang mana menggunakan sizeof() untuk mengetahui jumlah
// dari panjang array.

#include <iostream>
using namespace std;

int main() {
  int data[3][2] = {{1, 2}, {3, 4}, {5, 6}};

  int baris = sizeof(data) / sizeof(data)[0];
  int kolom = sizeof(data)[0] / sizeof(data)[0][0];

  cout << "Baris: " << baris << '\n';
  cout << "Kolom: " << kolom << '\n';

  return 0;
}