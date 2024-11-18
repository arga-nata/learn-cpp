#include <cmath>
#include <iostream>

using namespace std;
int main() {
  double massa, kecepatan;
  cout << "Masukkan massa dalam bentuk (kg): ";
  cin >> massa;
  cout << "Masukkan kecepatan dalam bentuk (m/s): ";
  cin >> kecepatan;

  double energiKinetik = 0.5 * massa * pow(kecepatan, 2);
  cout << energiKinetik;
  return 0;
}