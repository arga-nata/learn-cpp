#include <iostream>
using namespace std;

int main() {
  // array = a data structure that can hold multiple values value are accessed
  // by an index number "kind of like a variable that holds multiple values"

  string cars[] = {"Corvette", "Mustang", "Camry"};

  cars[0] = "Camaro";

  cout << cars[0] << '\n';
  cout << cars[1] << '\n';
  cout << cars[2] << '\n';

  double prices[] = {5.00, 7.50, 9.99, 15.00};

  cout << prices[0] << '\n';
  cout << prices[1] << '\n';
  cout << prices[2] << '\n';
  cout << prices[3] << '\n';

  return 0;
}