/*Soal 18: Fungsi Mencari Elemen dalam vector
Buatlah sebuah fungsi bernama findElement yang menerima dua parameter: sebuah
vector bilangan bulat dan sebuah bilangan bulat target. Fungsi ini harus
mengembalikan indeks pertama dari target dalam vector, atau -1 jika target tidak
ditemukan.*/

#include <iostream>
#include <vector>
using namespace std;

int findElement(vector<int> array);

int main() {
  vector<int> array = {10, 20, 30, 40, 50};

  findElement(array);

  return 0;
}
int findElement(vector<int> array) {
  int target = 10;
  return 0;
}