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
    bool running = true;

    drawBoard(spaces);

    while (running)
    {
        playerMove(spaces, player);
    }

    return 0;
}

void drawBoard(char *spaces)
{
    cout << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << spaces[0] << "  |   " << spaces[1] << " |  " << spaces[2] << "   " << '\n';
    cout << "_____|_____|_____" << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << spaces[3] << "  |   " << spaces[4] << " |  " << spaces[5] << "   " << '\n';
    cout << "_____|_____|_____" << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << spaces[6] << "  |   " << spaces[7] << " |  " << spaces[8] << "   " << '\n';
    cout << "     |     |     " << '\n';
    cout << '\n';
}

void playerMove(char *spaces, char player)
{
    int number;
    do
    {
        cout << "Enter a spot to place a marker (1-9)";
        cin >> number;
        number--;
        if (spaces[number] == ' ')
        {
            spaces[number] = player;
        }

    } while (!number > 0 || !number < 8);
}
void computerMove(char *spaces, char computer) {}
bool checkWinner(char *spaces, char player, char computer) { return 0; }
bool checkTie(char *spaces) { return 0; }