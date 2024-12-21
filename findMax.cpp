/*Soal 18: Fungsi Mencari Elemen dalam vector
Buatlah sebuah fungsi bernama findElement yang menerima dua parameter: sebuah
vector bilangan bulat dan sebuah bilangan bulat target. Fungsi ini harus
mengembalikan indeks pertama dari target dalam vector, atau -1 jika target tidak
ditemukan.*/

#include <iostream>
#include <vector>
using namespace std;

int findElement(vector<int> array, int target);

int main() {
  int target;

  vector<int> array = {10, 20, 30, 40, 50};

  cout << "Masukkan elemen yang ingin dicari: ";
  cin >> target;

  int index = findElement(array, target);

  if (index != -1) {
    cout << "Elemen ditemukan pada indeks: " << index;
  } else {
    cout << "Elemen tidak ditemukan";
  }

  return 0;
}
int findElement(vector<int> array, int target) {
  for (int i = 0; i < array.size(); i++) {
    if (array[i] == target) {
      return i;
    } else {
      return -1;
    }
  }
  return 0;
}