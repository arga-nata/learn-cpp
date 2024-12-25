#include <iostream>
#include <vector>
using namespace std;

// Mendefinisikan alias tipe baru 'text_t' untuk 'string'
using text_t = string;
// Mendefinisikan alias tipe baru 'number_t' untuk 'int'
using number_t = int;

int main()
{
  // typedef = kata kunci terbalik yang digunakan untuk membuat nama tambahan (alias) untuk
  // tipe data lain. Pengidentifikasi baru untuk tipe yang sudah ada. Membantu dengan
  // keterbacaan dan mengurangi kesalahan pengetikan

  // Mendefinisikan variabel 'nama' dengan tipe 'text_t' (yang merupakan alias untuk 'string')
  text_t nama = "Arga";
  // Mendefinisikan variabel 'umur' dengan tipe 'number_t' (yang merupakan alias untuk 'int')
  number_t umur = 21;

  // Mencetak nilai 'nama' ke konsol
  cout << nama << '\n';
  // Mencetak nilai 'umur' ke konsol
  cout << umur << '\n';

  return 0;
}
