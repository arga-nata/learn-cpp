/*Tulis program yang meminta pengguna untuk memasukkan beberapa angka ke dalam array dan kemudian mencari sebuah
angka tertentu di dalam array tersebut. Program harus menampilkan apakah angka tersebut ditemukan dalam array atau tidak.*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int array[5];

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        cout << "Masukkan angka ke-" << i + 1 << " ";
        cin >> array[i];
    }

    cout << "Elemen-elemen array: ";

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        cout << array[i] << " ";
    }

    cout << '\n';

    int dicari = 0;

    cout << "Masukkan angka yang ingin dicari: ";
    cin >> dicari;

    int *mencari = find(array, array + sizeof(array) / sizeof(array[0]), dicari);

    cout << "Angka " << dicari << " ditemukan pada indeks ke-" << distance(array, mencari);

    return 0;
}