#include <iostream>
using namespace std;

int main() {
  // foreach loop = loop yang mempermudah traversing (penjelajahan) melalui
  // kumpulan data yang dapat diiterasi

  string kelompokEnam[] = {"Arga", "Dimas", "Ilham", "Abbad", "Firman"};

  cout << "Anggota: ";

  for (string anggota : kelompokEnam) {
    cout << anggota << " ";
  }

  int angka[] = {51, 61, 85, 49, 57};

  cout << "\nNIM: ";

  for (int nim : angka) {
    cout << nim << " ";
  }
  return 0;
}