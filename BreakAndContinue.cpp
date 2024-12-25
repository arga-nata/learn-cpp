#include <iostream>
using namespace std;

int main()
{
  // break = keluar dari loop
  // continue = lewati iterasi saat ini

  // Mencetak "Angka: " ke konsol
  cout << "Angka: ";

  // Mendefinisikan variabel keluar dengan nilai 4
  int keluar = 4;

  // Loop dari 1 hingga 10
  for (int i = 1; i <= 10; i++)
  {
    // Jika i sama dengan keluar, lewati iterasi saat ini
    if (i == keluar)
    {
      continue;
    }
    // Mencetak nilai i ke konsol
    cout << i << " ";
  }
  // Mencetak "Melewati angka 4" ke konsol
  cout << "\nMelewati angka " << keluar;

  return 0;
}
