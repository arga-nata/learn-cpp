#include <iostream>
using namespace std;

int main()
{
  // Kata kunci const menentukan bahwa nilai suatu variabel adalah konstan
  // Memberitahu compiler untuk mencegah apapun mengubahnya (read only)

  // Mendefinisikan konstanta PI dengan nilai 3.14159
  const double PI = 3.14159;
  // PI = 420.69; // Tidak diperbolehkan karena PI adalah konstanta

  // Mendefinisikan variabel radius dengan nilai 10
  double radius = 10;
  // Menghitung keliling lingkaran menggunakan rumus 2 * PI * radius
  double circumstance = 2 * PI * radius;

  // Mencetak nilai keliling ke konsol
  cout << "Keliling: " << circumstance << " cm";

  return 0;
}
