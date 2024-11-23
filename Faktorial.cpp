#include <iostream>
using namespace std;
int main() {
  int angka;
  int faktorial = 1;

  cout << "Masukkan sebuah angka: ";
  cin >> angka;

  for (int i = 1; i < angka + 1; i++) {
    faktorial *= i;
  }
  cout << "Faktorial dari " << angka << " adalah " << faktorial;
  return 0;
}