/*Buatlah program C++ yang:

Membuat sebuah vector untuk menyimpan nilai-nilai integer.

Meminta pengguna untuk memasukkan nilai-nilai integer hingga pengguna memasukkan
angka negatif.

Menghitung dan menampilkan jumlah nilai dalam vector.

Menghitung dan menampilkan nilai rata-rata dari vector.

Menghapus elemen yang bernilai genap dari vector.

Menampilkan nilai-nilai dalam vector setelah penghapusan elemen genap.

Petunjuk:
Gunakan loop untuk menerima input dari pengguna hingga mereka memasukkan angka
negatif.

Gunakan fungsi accumulate untuk menghitung jumlah.

Gunakan iterator untuk menghapus elemen genap dari vector.*/

#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
  vector<int> array;
  int nilai;

  cout << "Masukkan nilai-nilai integer, masukkan negatif untuk berhenti\n";

  while (true) {
    cin >> nilai;
    if (nilai < 0)
      break;
    array.push_back(nilai);
  }

  double jumlahNilai = accumulate(array.begin(), array.end(), 0);
  
  cout << "Jumlah nilai: " << jumlahNilai;

  return 0;
}