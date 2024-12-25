#include <iostream>
using namespace std;

int main() {
  // foreach loop = loop yang mempermudah traversing (penjelajahan) melalui
  // kumpulan data yang dapat diiterasi

  string kelompokEnam[] = {"Arga", "Dimas", "Ilham", "Abbad", "Firman"};

  for (string anggota : kelompokEnam) {
    cout << anggota << '\n';
  }

  int angka[] = {10, 20, 30, 40, 50};

  for (int nilai : angka) {
    cout << nilai << '\n';
  }
  return 0;
}