#include <iostream>

int main() {
  int students = 20;

  students = students + 1;
  students += 1;
  students++;

  students = students - 1;
  students -= students;
  students--;

  students = students * 2;
  students *= 2;

  students = students / 2;
  students /= 2;

  students % 2;
  students %= students;

  return 0;
}