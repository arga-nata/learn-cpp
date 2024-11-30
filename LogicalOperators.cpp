#include <iostream>
using namespace std;

int main() {
  // && = check if two conditions are true
  // || = check if at least one of two conditions is true
  // ! = reverses the logical state of its operand

  int temp;
  bool sunny = false;

  cout << "Enter the temperature: ";
  cin >> temp;

  if (temp <= 0 || temp >= 30) {
    cout << "The temperature is bad!\n";
  } else {
    cout << "The temperature is good!\n";
  }
  if (!sunny) {
    cout << "It is cloudy outside!";
  } else {
    cout << "It is sunny outside!";
  }

  return 0;
}