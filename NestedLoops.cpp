#include <iostream>
using namespace std;

int main()
{
  int baris = 3; // Mengatur jumlah baris dalam array 2D
  int kolom = 4; // Mengatur jumlah kolom dalam array 2D

  for (int i = 0; i < baris; i++) // Looping untuk setiap baris
  {
    for (int j = 0; j < kolom; j++) // Looping untuk setiap kolom
    {
      cout << j << " "; // Mencetak nilai j diikuti oleh spasi
    }
  }
  cout << '\n'; // Mencetak karakter newline setelah setiap baris

  return 0;
}
