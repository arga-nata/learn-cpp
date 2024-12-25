#include <iostream>
using namespace std;

int main()
{
  // Operator ternary ?: = pengganti dari pernyataan if/else
  // kondisi ? ekspresi1 : ekspresi2;

  // Mendefinisikan variabel nilai dengan nilai 50
  int nilai = 50;
  // Jika grade >= 60, cetak "Ganjil", jika tidak, cetak "Genap"
  nilai >= 60 ? cout << "Ganjil\n" : cout << "Genap\n";

  // Mendefinisikan variabel number dengan nilai 9
  int angka = 9;
  // Jika angka % 2 menghasilkan 1 (ganjil), cetak "Ganjil", jika tidak, cetak "Genap"
  angka % 2 ? cout << "Ganjil\n" : cout << "Genap\n";

  // Mendefinisikan variabel boolean lapar dengan nilai false
  bool lapar = false;
  // Jika lapar bernilai true, cetak "Kamu lapar", jika tidak, cetak "Kamu kenyang"
  lapar ? cout << "Kamu lapar\n" : cout << "Kamu kenyang\n";
  // cout << (lapar ? "Kamu lapar" : "Kamu kenyang");

  return 0;
}
