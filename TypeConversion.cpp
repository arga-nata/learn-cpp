#include <iostream>
using namespace std;

int main()
{
  // konversi tipe = mengubah nilai dari satu tipe data ke tipe data lainnya
  // implicit = otomatis
  // explicit = Didahului oleh tipe data baru (int)

  // Mendefinisikan variabel 'benar' dengan nilai 8
  int benar = 8;
  // Mendefinisikan variabel 'pertanyaan' dengan nilai 10
  int pertanyaan = 10;
  // Mengonversi 'pertanyaan' menjadi double secara eksplisit dan menghitung skor
  double skor = benar / (double)pertanyaan * 100;

  // Mencetak nilai 'score' ke konsol
  cout << skor << "%";

  return 0;
}
