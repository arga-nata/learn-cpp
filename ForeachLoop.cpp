#include <iostream>
using namespace std;

int main() {
  // foreach loop = loop that eases the traversal over an iterable data set

  string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};
  for (string students : students) {
    cout << students << '\n';
  }

  int grades[] = {65, 72, 81, 93};
  for (int grades : grades) {
    cout << grades << '\n';
  }
  return 0;
}