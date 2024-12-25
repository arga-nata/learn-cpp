#include <iostream> // Mengimpor pustaka iostream untuk input dan output
using namespace std;

int main()
{
  // Mendefinisikan variabel angka
  int angka;
  // Mendefinisikan variabel tebakan
  int tebakan;
  // Mendefinisikan variabel percobaan dan menginisialisasi dengan 0
  int percobaan = 0;

  // Menginisialisasi generator angka acak dengan waktu saat ini
  srand(time(NULL));
  // Menghasilkan angka acak antara 1 dan 100
  angka = rand() % 100 + 1;

  // Mencetak judul permainan
  cout << "****** NUMBER GUESSING GAME ******\n";

  do
  {
    // Meminta pengguna untuk memasukkan tebakan
    cout << "Masukkan tebakan antara (1 - 100): ";
    // Menerima input tebakan dari pengguna
    cin >> tebakan;
    // Menambah jumlah percobaan
    percobaan++;

    // Jika tebakan lebih besar dari angka
    if (tebakan > angka)
    {
      // Mencetak "Terlalu tinggi!"
      cout << "Terlalu tinggi!\n";
    }
    // Jika tebakan lebih kecil dari angka
    else if (tebakan < angka)
    {
      // Mencetak "Terlalu rendah!"
      cout << "Terlalu rendah!\n";
    }
    // Jika tebakan sama dengan angka
    else if (tebakan == angka)
    {
      // Mencetak "Benar!" dan jumlah percobaan
      cout << "Benar! Jumlah percobaan: " << percobaan << '\n';
    }

  } // Mengulangi loop sampai tebakan sama dengan angka
  while (tebakan != angka);

  // Mencetak garis penutup
  cout << "**********************************";

  return 0;
}
