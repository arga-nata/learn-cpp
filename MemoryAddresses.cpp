#include <iostream>
using namespace std;

int main()
{
  // memory address = lokasi di memori tempat data disimpan
  // memory address dapat diakses dengan & (operator alamat-of)

  // Variabel string bernama 'nama' dengan nilai "Arganata"
  string nama = "Arganata";

  // Variabel integer bernama 'umur' dengan nilai 21
  int umur = 21;

  // Variabel boolean bernama 'mahasiswa' dengan nilai true (benar)
  bool mahasiswa = true;

  // Cetak alamat memori dari variabel 'nama'
  cout << &nama << '\n';
  // Cetak alamat memori dari variabel 'umur'
  cout << &umur << '\n';
  // Cetak alamat memori dari variabel 'mahasiswa'
  cout << &mahasiswa << '\n';

  return 0;
}
