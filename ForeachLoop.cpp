#include <iostream>
using namespace std;

int main() {
  // foreach loop = loop that eases the traversal over an iterable data set
  string students[] = {"Spongebob", "Patrick", "Squidward"};
  for (int i = 0; i < sizeof(students) / sizeof(string); i++) {
    cout << students[i];
  }

  return 0;
}