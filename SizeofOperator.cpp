#include <iostream>
using namespace std;

int main() {
  string name = "Arga";
  double gpa = 2.5;
  char grade = 'F';
  bool student = true;

  char grades[] = {'A', 'B', 'C', 'D', 'F'};
  string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

  cout << sizeof(students) / sizeof(string) << " elements\n";

  return 0;
}