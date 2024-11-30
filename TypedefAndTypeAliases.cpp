#include <iostream>
#include <vector>
using namespace std;
using text_t = string;
using number_t = int;

int main() {
  // typedef = reversed keyword used to create an additional name (alias) for
  // another data type. New identifier for an existing type. Helps with
  // readability and reduces typos

  text_t firstName = "Arga";
  number_t age = 21;

  cout << firstName << '\n';
  cout << age << '\n';

  return 0;
}