/*Buatlah program yang mencetak ukuran dari beberapa tipe data dasar seperti
 * int, float, double, dan char.*/

#include <iostream>
using namespace std;
int main() {
  int a;
  float b;
  double c;
  char d;
  cout << sizeof(a) << '\n';
  cout << sizeof(b) << '\n';
  cout << sizeof(c) << '\n';
  cout << sizeof(d) << '\n';
  return 0;
}