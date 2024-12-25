#include <iostream>
using namespace std;

int main() {
  // break = keluar dari loop
  // continue = lewati iterasi saat ini

  cout << "Angka: ";

  int breaks = 4;

  for (int i = 1; i <= 10; i++) {
    if (i == breaks) {
      continue;
    }
    cout << i << " ";
  }
  cout << "\nMelewati angka " << breaks;

  return 0;
}