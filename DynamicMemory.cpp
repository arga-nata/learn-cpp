#include <iostream>
using namespace std;

int main()
{
    // dynamic memory = Memory that is allocated after the program
    //                  is already compiled & running.
    //                  User the 'new' operator to allocate
    //                  memory in the heap rather than the sack

    //                  Useful when we don't know how much memory
    //                  we will need. Makes our programs more flexible,
    //                  especially when accepting user input.

    char *pGrades = NULL;
    int size;

    cout << "How many grades to enter in?: ";
    cin >> size;
    pGrades = new char[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter grades #" << i + 1 << ": ";
        cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}