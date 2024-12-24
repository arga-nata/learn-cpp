#include <iostream>
using namespace std;

int main() {
  int data[3][4][9];

  int size1 = sizeof(data) / sizeof(data)[0];
  int size2 = sizeof(data)[0] / sizeof(data)[0][0];
  int size3 = sizeof(data)[0][0] / sizeof(data)[0][0][0];

  cout << size1 << " ";
  cout << size2 << " ";
  cout << size3 << " ";

  return 0;
}