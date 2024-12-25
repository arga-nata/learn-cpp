#include <iostream>

int main() {
  // operator aritmatika = mengembalikan hasil dari operasi aritmatika tertentu
  // (+ - * /)

  int students = 20;

  // Penambahan
  students = students + 1;
  students += 1;
  students++;

  // Pengurangan
  students = students - 1;
  students -= students;
  students--;

  // Perkalian
  students = students * 2;
  students *= 2;

  // Pembagian
  students = students / 2;
  students /= 2;

  // Modulo
  students % 2;
  students %= students;

  return 0;
}