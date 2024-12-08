#include <ctime>
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

  computer = getComputerChoice();
  cout << "Computer choice: ";
  showChoice(computer);

  chooseWinner(player, computer);

  return 0;
}
char getUserChoice() {
  char player;
  cout << "Rock-Paper-Scissors Game!\n";
  do {
    cout << "Choose one of the following\n";
    cout << "***********************\n";
    cout << "'r' for rock\n";
    cout << "'p' for paper\n";
    cout << "'s' for scissors\n";
    cin >> player;
  } while (player != 'r' && player != 'p' && player != 's');

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
      cout << "It's a tie!\n";
    } else if (computer == 'p') {
      cout << "You lose!\n";
    } else {
      cout << "You win!\n";
    }
    break;

  case 'p':
    if (computer == 'p') {
      cout << "It's a tie!\n";
    } else if (computer == 's') {
      cout << "You lose!\n";
    } else {
      cout << "You win!\n";
    }
    break;

  case 's':
    if (computer == 's') {
      cout << "It's a tie!\n";
    } else if (computer == 'p') {
      cout << "You lose!\n";
    } else {
      cout << "You win!\n";
    }
    break;
  }
}