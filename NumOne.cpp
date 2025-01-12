#include <iostream>
using namespace std;

int menghitungDeterminan(int ukuran, int matriks[3][3]);
void menghitungAdjoin(int ukuran, int matriks[3][3], int adjoin[3][3]);
void transposeMatriks(int ukuran, int matriks[3][3], int transpose[3][3]);

int main()
{
    int matriks[3][3] = {{4, 2, 8},
                         {2, 1, 5},
                         {3, 2, 4}};

    int ukuran = sizeof(matriks) / sizeof(matriks[0]);

    cout << "=============\n";
    cout << "Matriks A: \n";
    cout << "=============\n";

    for (int i = 0; i < ukuran; i++)
    {
        for (int j = 0; j < ukuran; j++)
        {
            cout << "| " << matriks[i][j] << " ";
        }
        cout << "|\n";
    }
    cout << "=============\n";

    int determinan = menghitungDeterminan(ukuran, matriks);

    int adjoin[3][3];
    menghitungAdjoin(ukuran, matriks, adjoin);

    cout << "Determinan: " << determinan << '\n';
    cout << "=============\n";
    cout << "Adjoin A: \n";
    cout << "=============\n";
    for (int i = 0; i < ukuran; i++)
    {
        for (int j = 0; j < ukuran; j++)
        {
            cout << "| " << adjoin[i][j] << " ";
        }
        cout << "|\n";
    }

    int transpose[3][3];
    transposeMatriks(ukuran, matriks, transpose);

    cout << "=============\n";
    cout << "Transpose A: \n";
    cout << "=============\n";
    for (int i = 0; i < ukuran; i++)
    {
        for (int j = 0; j < ukuran; j++)
        {
            cout << "| " << transpose[i][j] << " ";
        }
        cout << "|\n";
    }

    return 0;
}

int menghitungDeterminan(int ukuran, int matriks[3][3])
{
    int determinan = 0;
    for (int i = 0; i < ukuran; i++)
    {
        determinan += matriks[0][i] * (matriks[1][(i + 1) % 3] * matriks[2][(i + 2) % 3] - matriks[2][(i + 1) % 3] * matriks[1][(i + 2) % 3]);
    }
    return determinan;
}

void menghitungAdjoin(int ukuran, int matriks[3][3], int adjoin[3][3])
{
    adjoin[0][0] = matriks[1][1] * matriks[2][2] - matriks[2][1] * matriks[1][2];
    adjoin[0][1] = -(matriks[1][0] * matriks[2][2] - matriks[2][0] * matriks[1][2]);
    adjoin[0][2] = matriks[1][0] * matriks[2][1] - matriks[2][0] * matriks[1][1];

    adjoin[1][0] = -(matriks[0][1] * matriks[2][2] - matriks[2][1] * matriks[0][2]);
    adjoin[1][1] = matriks[0][0] * matriks[2][2] - matriks[2][0] * matriks[0][2];
    adjoin[1][2] = -(matriks[0][0] * matriks[2][1] - matriks[2][0] * matriks[0][1]);

    adjoin[2][0] = matriks[0][1] * matriks[1][2] - matriks[1][1] * matriks[0][2];
    adjoin[2][1] = -(matriks[0][0] * matriks[1][2] - matriks[1][0] * matriks[0][2]);
    adjoin[2][2] = matriks[0][0] * matriks[1][1] - matriks[1][0] * matriks[0][1];
}

void transposeMatriks(int ukuran, int matriks[3][3], int transpose[3][3])
{
    for (int i = 0; i < ukuran; i++)
    {
        for (int j = 0; j < ukuran; j++)
        {
            transpose[j][i] = matriks[i][j];
        }
    }
}
