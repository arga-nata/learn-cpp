#include <iostream>
using namespace std;
int main() {
  int angka;
  bool bilanganPrima = true;
  cout << "Masukkan sebuah angka: ";
  cin >> angka;
  if (angka <= 1) {
    bilanganPrima = false;
  }

  for (int i = 2; i < angka; i++) {
    if (angka % i == 0) {
      bilanganPrima = false;
      break;
    }
  }
  if (bilanganPrima) {
    cout << angka << " adalah bilangan prima";
  } else {
    cout << angka << " bukanlah bilangan prima";
  }
  return 0;
}