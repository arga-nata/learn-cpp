#include <iostream>
using namespace std;

int main()
{
  // Mencetak "Angka: " ke konsol
  cout << "Angka: ";

  // Mendefinisikan variabel skip dengan nilai 4
  int skip = 4;

  // Loop dari 1 hingga 10
  for (int i = 1; i <= 10; i++)
  {
    // Jika i sama dengan skip, lewati iterasi saat ini
    if (i == skip)
    {
      continue;
    }
    // Mencetak nilai i ke konsol
    cout << i << " ";
  }
  // Mencetak "Melewati angka 4" ke konsol
  cout << "\nMelewati angka " << skip;

  return 0;
}
