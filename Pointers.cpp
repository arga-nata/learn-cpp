#include <iostream>
using namespace std;

int main() { // pointers = variable that stores a memory address of another
             // variable
  // sometimes it's easier to work with an address
  // & address-of operator
  // * dereference operators

  string name = "Arganata";
  int age = 21;
  string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

  string *pName = &name;
  int *pAge = &age;
  string *pFreePizzas = freePizzas;

  cout << *pName << '\n';
  cout << *pAge << '\n';
  cout << *pFreePizzas << '\n';

  return 0;
}