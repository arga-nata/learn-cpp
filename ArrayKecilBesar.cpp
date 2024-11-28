/*Buat program yang meminta pengguna untuk memasukkan 5 angka. Kemudian,
 * program harus menampilkan angka terbesar dan terkecil di antara angka-angka
 * tersebut.*/

#include <iostream>
using namespace std;
int main() {
  int array[5];
  cout << "Masukkan sebuah angka: \n";
  for (int i = 0; i < 5; i++) {
    cin >> array[i];
  }
  int terkecil = array[0];
  int terbesar = array[0];
  for (int i = 0; i < 5; i++) {
    if (array[i] > terbesar) {
      terbesar = array[i];
    } else if (array[i] < terkecil) {
      terkecil = array[i];
    }
  }
  cout << "Angka terkecil adalah: " << terkecil;
  cout << "\nAngka terbesar adalah: " << terbesar;
  return 0;
}