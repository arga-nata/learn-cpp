#include <iostream>
using namespace std;

int main() {
  int matriks1[3][3] = {{2, 4, 1}, {7, 6, 1}, {3, 3, 2}};
  int matriks2[3][3] = {{2, 2, 3}, {2, 7, 2}, {1, 2, 9}};

  int hasil[3][3] = {0};

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        cout << matriks1[i][j] << "*" << matriks2[k][j] << " ";
      }
      cout << "\n";
    }
  }

  return 0;
}