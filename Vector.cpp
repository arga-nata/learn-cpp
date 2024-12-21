#include <ctime>
#include <iostream>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {
  char player, computer;

  player = getUserChoice();
  cout << "Your choice: ";
  showChoice(player);

  computer = getComputerChoice();
  cout << "Computer choice: ";
  showChoice(computer);

  chooseWinner(player, computer);

  return 0;
}
char getUserChoice() {
  char player;
  cout << "Rock-Paper-Scissors Game\n";
  do {
    cout << "************************\n";
    cout << "Choose one of the following\n";
    cout << "'r' for Rock\n";
    cout << "'p' for Paper\n";
    cout << "'s' for Scissors\n";
    cin >> player;
  } while (player != 'r' & player != 'p' & player != 's');
  return player;
}
char getComputerChoice() {
  srand(time(NULL));
  int num = rand() % 3 + 1;

  switch (num) {
  case 1:
    return 'r';
  case 2:
    return 'p';
  case 3:
    return 's';
  }
  return 0;
}
void showChoice(char choice) {
  switch (choice) {
  case 'r':
    cout << "Rock\n";
    break;
  case 'p':
    cout << "Paper\n";
    break;
  case 's':
    cout << "Scissors\n";
    break;
  }
}
void chooseWinner(char player, char computer) {
  switch (player) {
  case 'r':
    if (computer == 'r') {
      cout << "Draw!\n";
    } else if (computer == 'p') {
      cout << "You lose!\n";
    } else {
      cout << "You win!\n";
    }
    break;
  case 'p':
    if (computer == 'p') {
      cout << "Draw!\n";
    } else if (computer == 's') {
      cout << "You lose!\n";
    } else {
      cout << "You win!\n";
    }
    break;
  case 's':
    if (computer == 's') {
      cout << "Draw!\n";
    } else if (computer == 'r') {
      cout << "You lose!\n";
    } else {
      cout << "You win!\n";
    }
    break;
  }
}