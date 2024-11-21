#include <iostream>
using namespace std;

int main() {
  int jumlahMotor, jumlahMobil, jamMasuk, jamKeluar, totalJam;

  cout << "Masukkan jumlah motor: ";
  cin >> jumlahMotor;
  cout << "Masukkan jumlah mobil: ";
  cin >> jumlahMobil;
  cout << "Input jam masuk (format 24 jam): ";
  cin >> jamMasuk;
  cout << "Input jam keluar (format 24 jam): ";
  cin >> jamKeluar;

  int parkirMotor = 2000;
  int parkirMobil = 5000;

  if (jamMasuk <= jamKeluar) {
    totalJam = jamKeluar - jamMasuk;
  } else {
    totalJam = (24 - jamMasuk) + jamKeluar;
  }

  int totalMotor = jumlahMotor * parkirMotor * totalJam;
  int totalMobil = jumlahMobil * parkirMobil * totalJam;

  cout << "Total biaya parkir: "
       << "Rp " << totalMotor + totalMobil << " (" << totalJam << " jam)";
  return 0;
}