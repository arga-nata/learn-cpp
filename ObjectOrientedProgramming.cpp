#include <iostream>
using namespace std;

class Car {
public:
  string make;
  string model;
  int year;
  string color;

  void accelerate() { cout << "You step on the gas!\n"; }
  void brake() { cout << "You step on the brake!\n"; }
};
int main() {
  Car car1;
  car1.make;
  car1.model;
  return 0;
}