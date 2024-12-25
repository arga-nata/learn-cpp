#include <iostream>
using namespace std;

int main() {
  // foreach loop = loop yang mempermudah traversing (penjelajahan) melalui
  // kumpulan data yang dapat diiterasi

  // Array nama untuk kelompok 6
  string kelompokEnam[] = {"Arganata", "Dimas", "Ilham", "Abbad", "Firman"};

  cout << "Anggota: "; // Cetak "Anggota: "

  // Foreach loop untuk iterasi melalui array nama
  for (string anggota : kelompokEnam) {
    cout << anggota << " "; // Cetak setiap nama diikuti dengan spasi
  }

  // Array angka
  int angka[] = {51, 61, 85, 49, 57};

  cout << "\nNIM: "; // Cetak "\nNIM: " (baris baru dan "NIM: ")

  // Foreach loop untuk iterasi melalui array angka
  for (int nim : angka) {
    cout << nim << " "; // Cetak setiap angka diikuti dengan spasi
  }

  return 0; // Kembalikan nilai 0 untuk menunjukkan penyelesaian yang sukses
}
