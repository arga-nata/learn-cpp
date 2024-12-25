#include <iostream>

int main()
{
  // operator aritmatika = mengembalikan hasil dari operasi aritmatika tertentu
  // (+ - * /)

  // Mendefinisikan variabel mahasiswa dengan nilai 28
  int mahasiswa = 28;

  // Penambahan
  mahasiswa = mahasiswa + 1;
  mahasiswa += 1;
  mahasiswa++;

  // Pengurangan
  mahasiswa = mahasiswa - 1;
  mahasiswa -= mahasiswa;
  mahasiswa--;

  // Perkalian
  mahasiswa = mahasiswa * 2;
  mahasiswa *= 2;

  // Pembagian
  mahasiswa = mahasiswa / 2;
  mahasiswa /= 2;

  // Modulo
  mahasiswa % 2;
  mahasiswa %= mahasiswa;

  return 0;
}