#include <iostream>
using namespace std;

int main()
{
  // && = mengecek apakah dua kondisi bernilai benar
  // || = mengecek apakah minimal salah satu dari dua kondisi bernilai benar
  // ! = membalikkan keadaan logis dari operannya

  // Deklarasi variabel untuk menyimpan suhu
  int suhu;

  // Deklarasi variabel boolean untuk menyimpan status cuaca (cerah atau tidak)
  bool cerah = false;

  // Meminta pengguna memasukkan suhu
  cout << "Masukkan suhu: ";
  // Membaca input suhu dari pengguna
  cin >> suhu;

  // Mengecek apakah suhu kurang dari atau sama dengan 0 atau lebih dari atau sama dengan 30
  if (suhu <= 0 || suhu >= 30)
  { // Menampilkan pesan jika suhu tidak nyaman
    cout << "Suhunya buruk!\n";
  }
  else
  { // Menampilkan pesan jika suhu nyaman
    cout << "Suhunya baik!\n";
  }

  // Mengecek apakah cuaca tidak cerah
  if (!cerah)
  {
    // Menampilkan pesan jika cuaca berawan
    cout << "Di luar mendung!";
  }
  else
  { // Menampilkan pesan jika cuaca cerah
    cout << "Di luar cerah!";
  }

  return 0;
}
