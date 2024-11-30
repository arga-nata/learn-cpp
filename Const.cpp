#include <iostream>
using namespace std;

int main() {
  // The const keyword specifies that a variable's value is constant tell the
  // compiler prevent anything from modifying it (read only)

  const double PI = 3.14159;
  // PI = 420.69;

  double radius = 10;
  double circumstance = 2 * PI * radius;

  cout << circumstance << " cm";

  return 0;
}