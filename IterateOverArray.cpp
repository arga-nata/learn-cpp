#include <iostream>
using namespace std;
int main() {
  string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};
  char grades[] = {'A', 'B', 'C', 'D', 'F'};
  for (int i = 0; i < sizeof(students) / sizeof(string); i++) {
    cout << students[i] << '\n';
  }
  for (char i = 0; i < sizeof(grades) / sizeof(char); i++) {
    cout << grades[i] << '\n';
  }

  return 0;
}
