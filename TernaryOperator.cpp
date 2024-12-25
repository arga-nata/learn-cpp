#include <iostream>
using namespace std;

int main()
{
  // Operator ternary ?: = pengganti dari pernyataan if/else
  // kondisi ? ekspresi1 : ekspresi2;

  // Mendefinisikan variabel nilai dengan nilai 50
  int nilai = 50;
  // Jika grade >= 60, cetak "Ganjil", jika tidak, cetak "Genap"
  nilai >= 60 ? cout << "Ganjil" : cout << "Genap";

  // Mendefinisikan variabel number dengan nilai 9
  int number = 9;
  // Jika number % 2 menghasilkan 1 (ganjil), cetak "ODD", jika tidak, cetak "EVEN"
  number % 2 ? cout << "Ganjil" : cout << "Genap";

  // Mendefinisikan variabel boolean hungry dengan nilai false
  bool hungry = false;
  // Jika hungry bernilai true, cetak "You are hungry", jika tidak, cetak "You are full"
  hungry ? cout << "You are hungry" : cout << "You are full";
  // cout << (hungry ? "You are hungry" : "You are full");

  return 0;
}
