/*Cobalah buat array yang menyimpan nilai-nilai dari 1 sampai 10.

Buat program yang menghitung dan menampilkan jumlah dari semua elemen dalam
array tersebut.*/

#include <iostream>
using namespace std;

int main() {
  int angka[10];

  cout << "Masukkan 10 angka: ";
  for (int i = 0; i < 10; i++) {
    cin >> angka[i];
  }

  int jumlah = 0;
  for (int i = 0; i < 10; i++) {
    jumlah += angka[i];
  }

  cout << "Jumlah semua elemen dalam array adalah: " << jumlah;

  return 0;
}
