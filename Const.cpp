#include <iostream>
using namespace std;

int main() {
  // Kata kunci const menentukan bahwa nilai suatu variabel adalah konstan
  // Memberitahu compiler untuk mencegah apapun mengubahnya (read only)

  const double PI = 3.14159;
  // PI = 420.69;

  double radius = 10;
  double circumstance = 2 * PI * radius;

  cout << "Keliling: " << circumstance << " cm";

  return 0;
}