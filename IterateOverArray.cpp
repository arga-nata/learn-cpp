#include <iostream>
using namespace std;

int main()
{
  // Deklarasi array string untuk nama-nama anggota kelompok
  string kelompokEnam[] = {"Arganata", "Dimas", "Ilham", "Abbad", "Firman"};

  // Deklarasi array integer untuk NIM anggota
  int nim[] = {51, 61, 85, 49, 57};

  // Mencetak label "Anggota:"
  cout << "Anggota: ";

  // Looping untuk mencetak setiap nama anggota kelompok
  for (int i = 0; i < sizeof(kelompokEnam) / sizeof(kelompokEnam[0]); i++)
  {
    cout << kelompokEnam[i] << " ";
  }

  // Baris baru untuk NIM
  cout << "\nNIM: ";

  // Looping untuk mencetak setiap NIM anggota
  for (int i = 0; i < sizeof(nim) / sizeof(nim[0]); i++)
  {
    cout << nim[i] << " ";
  }

  return 0;
}
