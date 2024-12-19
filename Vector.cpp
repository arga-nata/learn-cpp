/*Soal:
Buatlah program C++ yang:

Membuat sebuah vector untuk menyimpan nilai-nilai integer.

Meminta pengguna untuk memasukkan jumlah nilai integer yang akan dimasukkan.

Meminta pengguna untuk memasukkan nilai-nilai integer sebanyak jumlah yang telah
disebutkan.

Mengurutkan nilai-nilai dalam vector tersebut dari yang terkecil ke terbesar.

Menghitung jumlah dan rata-rata dari nilai-nilai dalam vector tersebut.

Menampilkan nilai-nilai yang sudah diurutkan, jumlah, dan rata-ratanya.*/

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
  int jumlahInteger;

  cout << "Masukkan jumlah integer: ";
  cin >> jumlahInteger;

  vector<int> array(jumlahInteger);

  for (int i = 0; i < array.size(); i++) {
    cin >> array[i];
  }

  sort(array.begin(), array.end());

  cout << "Urutkan nilai-nilai dalam vector tersebut dari yang terkecil ke "
          "terbesar: ";

  for (int i = 0; i < jumlahInteger; i++) {
    cout << array[i] << " ";
  }

  double jumlahSemua = accumulate(array.begin(), array.end(), 0);

  cout << "\nJumlah semua nilai-nilai dalam vector tersebut: " << jumlahSemua;

  double rataRata = jumlahSemua / jumlahInteger;

  cout << "\nJumlah rata-rata dalam vector tersebut: " << rataRata;

  return 0;
}