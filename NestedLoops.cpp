#include <iostream>
using namespace std;

int main()
{
  int baris = 3; // Mengatur jumlah baris dalam array 2D
  int kolom = 4; // Mengatur jumlah kolom dalam array 2D

  // Looping untuk setiap baris
  for (int i = 0; i < baris; i++)
  {
    // Looping untuk setiap kolom
    for (int j = 0; j < kolom; j++)
    {
      cout << j << " "; // Mencetak nilai j diikuti oleh spasi
    }
    cout << '\n'; // Mencetak karakter newline setelah setiap baris
  }

  return 0; // Mengembalikan 0 untuk menunjukkan bahwa program telah selesai
            // dengan sukses
}
