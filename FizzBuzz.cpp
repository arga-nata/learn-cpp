/*Soal Membuat Algoritma Fizz Buzz
Buatlah kode program C++ yang menampilkan deret angka dari 1 sampai 100, dengan
ketentuan tambahan:

Jika angka adalah kelipatan 3, cetak "Fizz" sebagai penggantinya.
Jika angka adalah kelipatan 5, cetak "Buzz" sebagai penggantinya.
Jika angka adalah kelipatan 3 dan 5, cetak "FizzBuzz" sebagai penggantinya.
Jika angka bukan kelipatan 3 maupun 5, cetak angka tersebut.*/

#include <iostream>
using namespace std;
int main() {
  int angka;
  for (int i = 1; i <= 100; i++) {
    if (i % 3 == 0) {
      cout << "Fizz ";
    } else if (i % 5 == 0) {
      cout << "Buzz ";
    } else if (i % 3 == 0 && i % 5 == 0) {
      cout << "Fizz Buzz ";
    } else {
      cout << i << " ";
    }
  }
  cout << "Test";
  return 0;
}