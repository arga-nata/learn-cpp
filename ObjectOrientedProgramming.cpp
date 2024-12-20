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
  car1.make = "Ford";
  car1.model = "Mustang";
  car1.year = 2023;
  car1.color = "silver";

  cout << car1.make << '\n';
  cout << car1.model << '\n';
  cout << car1.year << '\n';
  cout << car1.color << '\n';

  car1.accelerate();
  car1.brake();

  return 0;
}