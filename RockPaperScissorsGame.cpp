#include <iostream>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {
  char player;
  char computer;

  player = getUserChoice();
  cout << "Your choice: ";
  showChoice(player);
  return 0;
}
char getUserChoice() {
  char player;
  cout << "Rock-Paper-Scissors Game!\n";
  do {
    cout << "Choose one of the following\n";
    cout << "************************\n";
    cout << "'r' for rock\n";
    cout << "'p' for paper\n";
    cout << "'s' for scissors\n";
    cin >> player;
    cout << player;
  } while (player != 'r' && player != 'p' && player != 's');

  return 0;
}
char getComputerChoice() { return 0; }
void showChoice(char choice) {
  switch (choice) {
  case 'r':
    cout << "Rock'\n";
    break;

  default:
    break;
  }
}
void chooseWinner(char player, char computer) {}