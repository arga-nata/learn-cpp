#include <iostream>
using namespace std;

int main() {
  // Ternary operator ?: = replacement to an if/else statement
  // condition ? expression1 : expression 2;

  int grade = 50;
  grade >= 60 ? cout << "ODD" : cout << "EVEN";

  int number = 9;
  number % 2 ? cout << "ODD" : cout << "EVEN";

  bool hungry = false;
  hungry ? cout << "You are hungry" : cout << "You are full";
  // cout << (hungry ? "You are hungry" : "You are full");

  return 0;
}