#include <iostream>  // Mengimpor pustaka input-output standar
using namespace std; // Menggunakan namespace standar

int main() {
  // && = mengecek apakah dua kondisi bernilai benar
  // || = mengecek apakah minimal salah satu dari dua kondisi bernilai benar
  // ! = membalikkan keadaan logis dari operannya

  int suhu;           // Deklarasi variabel untuk menyimpan suhu
  bool cerah = false; // Deklarasi variabel boolean untuk menyimpan status cuaca
                      // (cerah atau tidak)

  cout << "Masukkan suhu: "; // Meminta pengguna memasukkan suhu
  cin >> suhu;               // Membaca input suhu dari pengguna

  // Mengecek apakah suhu kurang dari atau sama dengan 0 atau lebih dari atau
  // sama dengan 30
  if (suhu <= 0 || suhu >= 30) {
    cout << "Suhunya buruk!\n"; // Menampilkan pesan jika suhu tidak
                                // nyaman
  } else {
    cout << "Suhunya baik!\n"; // Menampilkan pesan jika suhu nyaman
  }

  // Mengecek apakah cuaca tidak cerah
  if (!cerah) {
    cout << "Di luar mendung!"; // Menampilkan pesan jika cuaca berawan
  } else {
    cout << "Di luar cerah!"; // Menampilkan pesan jika cuaca cerah
  }

  return 0; // Mengakhiri program
}
