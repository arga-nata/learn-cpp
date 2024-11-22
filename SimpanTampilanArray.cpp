#include <iostream>
using namespace std;
int main() {
  int angka[5];
  cout << "Masukkan 5 elemen: ";
  for (int i = 0; i < 5; i++) {
    cin >> angka[i];
  }
  cout << "Elemen dalam array adalah: ";
  for (int i = 0; i < 5; i++) {
    cout << angka[i] << " ";
  }

  return 0;
}