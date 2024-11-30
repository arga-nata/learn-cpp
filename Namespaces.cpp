#include <iostream>
using namespace std;

int main() {
  // Namespace = provides a solution for preventing name conflict in large
  // project. Each entity needs a unique name. A namespace allows for
  // identically named entities as long as the namespace are different.

  string name = "Arga";
  cout << "Hello " << name;

  return 0;
}