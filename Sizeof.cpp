#include <iostream>
using namespace std;
int main() {
  double gpa = 2.5;
  string name = "Arganata";
  char grade = 'F';
  char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
  string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};
  cout << sizeof(students) / sizeof(string) << " elements\n";
  return 0;
}