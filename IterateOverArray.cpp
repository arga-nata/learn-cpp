#include <iostream>
using namespace std;
int main() {
  string kelompokEnam[] = {"Arganata", "Dimas", "Ilham", "Abbad", "Firman"};

  int angka[] = {51, 61, 85, 49, 57};

  cout << "Anggota: ";

  for (int i = 0; i < sizeof(kelompokEnam) / sizeof(kelompokEnam)[0]; i++) {
    cout << kelompokEnam[i] << " ";
  }

  cout << "\nNIM: ";

  for (char i = 0; i < sizeof(angka) / sizeof(angka)[0]; i++) {
    cout << angka[i] << " ";
  }

  return 0;
}
