#include <iostream>
using namespace std;

int main() {
  // foreach loop = loop that eases the traversal over an iterable data set

  string students[] = {"Spongebob", "Patrick", "Squidward"};
  for (string students : students) {
    cout << students << '\n';
  }

  return 0;
}