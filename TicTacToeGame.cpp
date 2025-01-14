#include <iostream>
#include <ctime>
using namespace std;

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    return 0;
}

void drawBoard(char *spaces) {}

void playerMove(char *spaces, char player) {}
void computerMove(char *spaces, char computer) {}
bool checkWinner(char *spaces, char player, char computer) { return 0; }
bool checkTie(char *spaces) { return 0; }