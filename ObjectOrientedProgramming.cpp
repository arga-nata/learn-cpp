#include <iostream>
using namespace std;

class Car
{
public:
  string buatan;
  string model;
  int tahun;
  string warna;

  void accelerate() { cout << "Kamu menginjak gas!\n"; }
  void brake() { cout << "Kamu menginjak rem!\n"; }
};
int main()
{
  Car car1;
  car1.buatan = "Ford";
  car1.model = "Mustang";
  car1.tahun = 2023;
  car1.warna = "Silver";

  cout << car1.buatan << '\n';
  cout << car1.model << '\n';
  cout << car1.tahun << '\n';
  cout << car1.warna << '\n';

  car1.accelerate();
  car1.brake();

  return 0;
}