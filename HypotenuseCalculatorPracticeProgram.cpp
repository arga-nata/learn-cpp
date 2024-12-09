#include <cmath>
#include <iostream>

using namespace std;

int main() {
  double a;
  double b;
  double c;

  cout << "Enter side A: ";
  cin >> a;

  cout << "Enter side B: ";
  cin >> b;

  c = sqrt(pow(a, 2) + pow(b, 2));

  cout << "Side C: " << c;

  return 0;
}