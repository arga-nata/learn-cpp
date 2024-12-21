/*Soal 17: Fungsi Menemukan Angka Tertinggi dalam Vector
Buatlah sebuah fungsi bernama findMax yang menerima parameter berupa vector
bilangan bulat dan mengembalikan nilai tertinggi dari bilangan-bilangan dalam
vector tersebut.*/

#include <iostream>
#include <vector>
using namespace std;

int findMax();

int main() {
  vector<int> angka;
  int nilai;

  cout << "Masukkan 3 angka: ";
  for (int i = 0; i < 3; i++) {
    cin >> nilai;
    angka.push_back(nilai);
  }
  for (int i = 0; i < angka.size(); i++) {
    cout << angka[i];
  }

  return 0;
}
int findMax() { return 0; }