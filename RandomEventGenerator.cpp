#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand(time(0));
  int randNum = rand() % 5 + 1;

  switch (randNum) {
  case 1:
    cout << "You win a bumper sticker!\n";
    break;
  case 2:
    cout << "You win a t-shirt!\n";
    break;
  case 3:
    cout << "You win a free lunch!\n";
    break;
  case 4:
    cout << "You win a gift card!\n";
    break;
  case 5:
    cout << "You win a concert ticket!\n";
    break;
  default:
    cout << "You won nothing!";
    break;
  }

  return 0;
}