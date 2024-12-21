/*Buatlah sebuah fungsi bernama calculate yang menerima tiga parameter: dua
 * bilangan bulat dan satu karakter operasi (+, -, *, /). Fungsi ini harus
 * mengembalikan hasil operasi aritmetika yang ditentukan oleh karakter
 * tersebut.*/

#include <iostream>
using namespace std;

float calculate(int angka1, int angka2, char operasi, float hasil);

int main() {
  int angka1, angka2;
  char operasi;
  float hasil;

  cout << "Masukkan 2 angka!\n";
  cin >> angka1 >> angka2;

  cout << "Masukkan operasi! (+ - * /)\n";
  cin >> operasi;

  cout << "Hasil ";
  hasil = calculate(angka1, angka2, operasi, hasil);
  cout << " " << hasil;

  return 0;
}
float calculate(int angka1, int angka2, char operasi, float hasil) {
  switch (operasi) {
  case '+':
    cout << "penjumlahan dari " << angka1 << " dan " << angka2 << " adalah";
    hasil = angka1 + angka2;
    break;
  case '-':
    cout << "pengurangan";
    hasil = angka1 - angka2;
    break;
  case '*':
    cout << "perkalian";
    hasil = angka1 * angka2;
    break;
  case '/':
    cout << "pembagian";
    hasil = angka1 / angka2;
    break;
  }
  return hasil;
}