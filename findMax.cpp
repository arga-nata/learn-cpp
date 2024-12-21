/*Soal 17: Fungsi Menemukan Angka Tertinggi dalam Vector
Buatlah sebuah fungsi bernama findMax yang menerima parameter berupa vector
bilangan bulat dan mengembalikan nilai tertinggi dari bilangan-bilangan dalam
vector tersebut.*/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int findMax(vector<int> angka);

int main() {
  vector<int> angka;
  int nilai;

  cout << "Masukkan 3 angka: ";
  for (int i = 0; i < 3; i++) {
    cin >> nilai;
    angka.push_back(nilai);
  }
  cout << "Nilai tertinggi: " << findMax(angka);

  return 0;
}
int findMax(vector<int> angka) {
  int max = *max_element(angka.begin(), angka.end());
  return max;
}