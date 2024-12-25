#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  // Deklarasi dan inisialisasi array integer dengan 5 elemen
  int array[] = {2, 5, 3, 4, 1};

  // Menghitung jumlah elemen dalam array
  int size = sizeof(array) / sizeof(array)[0];

  // Menggunakan fungsi max_element untuk mencari elemen maksimum
  auto max = max_element(array, array + size);
  cout << "Nilai Maksimum: " << *max << '\n';

  return 0;
}