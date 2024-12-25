#include <iostream>
using namespace std;

int main()
{
  // Mengatur jumlah baris dalam array 2D
  int baris = 3;
  // Mengatur jumlah kolom dalam array 2D
  int kolom = 4;

  // Looping untuk setiap baris
  for (int i = 0; i < baris; i++)
  {
    // Looping untuk setiap kolom
    for (int j = 0; j < kolom; j++)
    {
      // Mencetak nilai j diikuti oleh spasi
      cout << j << " ";
    }
  }
  // Mencetak karakter newline setelah setiap baris
  cout << '\n';

  return 0;
}
