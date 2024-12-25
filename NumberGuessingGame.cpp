#include <iostream>
using namespace std;

int main()
{
  int angka;
  int tebakan;
  int percobaan;

  srand(time(NULL));
  angka = rand() % 100 + 1;

  cout << "****** NUMBER GUESSING GAME ******\n";

  do
  {
    cout << "Masukkan tebakan antara (1 - 100): ";
    cin >> tebakan;
    percobaan++;

    if (tebakan > angka)
    {
      cout << "Terlalu tinggi!\n";
    }
    else if (tebakan < angka)
    {
      cout << "Terlalu rendah!\n";
    }
    else if (tebakan == angka)
    {
      cout << "Benar! Jumlah percobaan: " << percobaan << '\n';
    }

  } while (tebakan != angka);

  cout << "**********************************";

  return 0;
}