#include <iostream>
using namespace std;

int main() {
  // Array 2 dimensi untuk nama mobil
  string mobil[3][3] = {{"Mustang", "Escape", "F-150"},
                        {"Corvette", "Equinox", "Silverado"},
                        {"Challenger", "Durango", "Ram 1500"}};

  // Menghitung jumlah baris dalam array
  int baris = sizeof(mobil) / sizeof(mobil)[0];

  // Menghitung jumlah kolom dalam array
  int kolom = sizeof(mobil)[0] / sizeof(mobil)[0][0];

  // Loop untuk iterasi melalui setiap baris
  for (int i = 0; i < baris; i++) {
    // Loop untuk iterasi melalui setiap kolom
    for (int j = 0; j < kolom; j++) {
      // Cetak elemen array
      cout << mobil[i][j] << " ";
    }
    // Cetak baris baru setelah setiap baris array selesai
    cout << '\n';
  }

  return 0;
}
