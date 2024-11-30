#include <iostream>
using namespace std;

int main() {
  int correct = 8;
  int questions = 10;
  double score = correct / (double)questions * 100;

  cout << score << "%";

  return 0;
}