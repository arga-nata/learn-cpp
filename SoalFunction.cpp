/*Buatlah sebuah fungsi bernama calculate yang menerima tiga parameter: dua
 * bilangan bulat dan satu karakter operasi (+, -, *, /). Fungsi ini harus
 * mengembalikan hasil operasi aritmetika yang ditentukan oleh karakter
 * tersebut.*/

#include <iostream>
using namespace std;

float calculate(int angka1, int angka2, char operasi);

int main() {
  int angka1, angka2;
  char operasi;

  cout << "Masukkan 2 angka!\n";
  cin >> angka1 >> angka2;

  cout << "Masukkan operasi! (+ - * /)\n";
  cin >> operasi;

  float hasil = calculate(angka1, angka2, operasi);

  cout << hasil;

  return 0;
}
float calculate(int angka1, int angka2, char operasi) {
  switch (operasi) {
  case '+':
    cout << "Penjumlahan dari " << angka1 << " dan " << angka2 << " adalah ";
    return angka1 + angka2;
  case '-':
    cout << "Pengurangan dari " << angka1 << " dan " << angka2 << " adalah ";
    return angka1 - angka2;
  case '*':
    cout << "Perkalian dari " << angka1 << " dan " << angka2 << " adalah ";
    return angka1 * angka2;
  case '/':
    if (angka2 != 0) {
      cout << "Pembagian dari " << angka1 << " dan " << angka2 << " adalah ";
      return angka1 / angka2;
    } else {
      cout << "Error: Pembagian dengan nol!";
      return 0;
    }
  default:
    cout << "Error: Operator tidak valid!";
    return 0;
  }
  return 0;
}