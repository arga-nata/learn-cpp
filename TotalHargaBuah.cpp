#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  int hargaApel = 24000, hargaJeruk = 32500, hargaSemangka = 8000;
  double beratApel, beratJeruk, beratSemangka, diskon, totalDiskon;

  cout << "Masukkan berat masing-masing buah (dalam kg)\n";
  cout << "Masukkan berat apel: ";
  cin >> beratApel;
  cout << "Masukkan berat jeruk: ";
  cin >> beratJeruk;
  cout << "Masukkan berat semangka: ";
  cin >> beratSemangka;

  double totalApel = beratApel * hargaApel;
  double totalJeruk = beratJeruk * hargaJeruk;
  double totalSemangka = beratSemangka * hargaSemangka;
  double beratTotal = beratApel + beratJeruk + beratSemangka;
  double totalSemua = totalApel + totalJeruk + totalSemangka;

  if (beratTotal > 10) {
    diskon = 5.0 / 100;
  } else if (beratTotal > 8) {
    diskon = 2.0 / 100;
  } else {
    diskon = 0;
  }
  cout << fixed << setprecision(2);
  totalDiskon = totalSemua * diskon;
  double bayar = totalSemua - totalDiskon;
  cout << "Harga yang harus dibayar: " << "Rp " << bayar;
  return 0;
}