/*Soal 18: Fungsi Mencari Elemen dalam vector
Buatlah sebuah fungsi bernama findElement yang menerima dua parameter: sebuah
vector bilangan bulat dan sebuah bilangan bulat target. Fungsi ini harus
mengembalikan indeks pertama dari target dalam vector, atau -1 jika target tidak
ditemukan.*/

#include <iostream>
#include <vector>
using namespace std;

int findElement();

int findElement() { return 0; }

int main() {
  vector<int> array(4);

  cout << "Masukkan elemen-elemen vector!\n";

  for (int i = 0; i < array.size(); i++) {
    cin >> array[i];
  }
  for (int i = 0; i < array.size(); i++) {
    cout << array[i];
  }

  findElement();

  return 0;
}