#include <iostream>
using namespace std;
int main() {
  int jumlahPrima;
  cout << "Bilangan Prima: ";
  for (int i = 2; i <= 50; i++) {
    bool bilanganPrima = true;
    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        bilanganPrima = false;
      }
    }
    if (bilanganPrima) {
      cout << i << " ";
      jumlahPrima++;
    }
  }
  cout << "\nJumlah bilangan prima: " << jumlahPrima;
  return 0;
}