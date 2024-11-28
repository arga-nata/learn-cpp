/*Cobalah buat array yang menyimpan nilai-nilai dari 1 sampai 10.

Buat program yang menghitung dan menampilkan jumlah dari semua elemen dalam
array tersebut.*/

#include <iostream>
using namespace std;
int main() {
  int array[10];
  cout << "Masukkan sebuah angka: \n";
  for (int i = 0; i < 10; i++) {
    cin >> array[i];
  }
  int jumlah = 0;
  for (int i = 0; i < 10; i++) {
    jumlah += array[i];
  }
  cout << "Jumlah dari semua elemen dalam array tersebut adalah: " << jumlah;
  return 0;
}
