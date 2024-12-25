#include <cmath>
#include <iostream>
using namespace std;

int main()
{
  // Mendeklarasikan variabel a dengan tipe double
  double a;
  // Mendeklarasikan variabel b dengan tipe double
  double b;
  // Mendeklarasikan variabel c dengan tipe double
  double c;

  // Meminta pengguna untuk memasukkan panjang sisi A
  cout << "Masukkan sisi A: ";
  cin >> a; // Membaca input dan menyimpannya di variabel a

  // Meminta pengguna untuk memasukkan panjang sisi B
  cout << "Masukkan sisi B: ";
  cin >> b; // Membaca input dan menyimpannya di variabel b

  // Menghitung panjang sisi C menggunakan rumus Pythagoras
  c = sqrt(pow(a, 2) + pow(b, 2));

  // Menampilkan hasil panjang sisi C
  cout << "Sisi C: " << c;

  return 0;
}
