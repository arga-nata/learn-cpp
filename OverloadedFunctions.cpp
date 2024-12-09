#include <iostream>
using namespace std;

void bakePizza();
void bakePizza(string topping1, string topping2);

int main() {
  bakePizza("pepperoni");

  return 0;
}

void bakePizza() { cout << "Here is your pizza!\n"; }

void bakePizza(string topping1) {
  cout << "Here is your " << topping1 << " pizza !\n ";
}

void bakePizza(string topping1) {
  cout << "Here is your " << topping1 << " and " << topping2 << " pizza !\n ";
}
