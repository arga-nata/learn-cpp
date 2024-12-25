#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  // array = struktur data yang dapat menyimpan beberapa nilai
  // nilai diakses menggunakan nomor indeks "seperti variabel yang menyimpan
  // banyak nilai"

  // Deklarasi array integer dengan 5 elemen
  // int array[5];

  // Deklarasi dan inisialisasi array integer dengan 5 elemen
  int array[] = {2, 5, 3, 4, 1};

  // Mengakses elemen pertama
  int firstElement = array[0];

  // Menghitung jumlah elemen dalam array
  int size = sizeof(array) / sizeof(array)[0];

  // Menginput elemen-elemen di array
  for (int i = 0; i < size; i++) {
    cin >> array[i];
  }

  // Menampilkan elemen- elemen di array
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }

  // Menggunakan fungsi max_element untuk mencari elemen maksimum
  auto max = max_element(array, array + size);
  cout << "Nilai Maksimum: " << *max << '\n';

  return 0;
}
