#include <iostream>
using namespace std;

int main()
{
  cout << "Angka: "; // Mencetak "Angka: " ke konsol

  int keluar = 4; // Mendefinisikan variabel keluar dengan nilai 4

  for (int i = 1; i <= 10; i++) // Loop dari 1 hingga 10
  {
    if (i == keluar) // Jika i sama dengan keluar, lewati iterasi saat ini
    {
      continue;
    }
    cout << i << " "; // Mencetak nilai i ke konsol
  }
  cout << "\nMelewati angka " << keluar; // Mencetak "Melewati angka 4" ke konsol

  return 0;
}
