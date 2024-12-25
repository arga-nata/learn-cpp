#include <iostream>
using namespace std;

class mobil
{
public:
  // Merek mobil
  string buatan;
  // Model mobil
  string model;
  // Tahun pembuatan
  int tahun;
  // Warna mobil
  string warna;

  // Metode untuk mempercepat
  void accelerate() { cout << "Kamu menginjak gas!\n"; }
  // Metode untuk mengerem
  void brake() { cout << "Kamu menginjak rem!\n"; }
};

int main()
{
  // Membuat objek car1 dari kelas Car
  mobil mobil1;
  // Mengatur buatan mobil menjadi "Ford"
  mobil1.buatan = "Ford";
  // Mengatur model mobil menjadi "Mustang"
  mobil1.model = "Mustang";
  // Mengatur tahun pembuatan mobil menjadi 2023
  mobil1.tahun = 2023;
  // Mengatur warna mobil menjadi "Silver"
  mobil1.warna = "Silver";

  // Mencetak buatan mobil
  cout << mobil1.buatan << '\n';
  // Mencetak model mobil
  cout << mobil1.model << '\n';
  // Mencetak tahun pembuatan mobil
  cout << mobil1.tahun << '\n';
  // Mencetak warna mobil
  cout << mobil1.warna << '\n';

  // Memanggil metode accelerate
  mobil1.accelerate();
  // Memanggil metode brake
  mobil1.brake();

  return 0;
}
