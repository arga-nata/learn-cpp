/*Bubble Sort: Tulis program yang meminta pengguna untuk memasukkan beberapa angka ke dalam array dan kemudian mengurutkan
angka-angka tersebut menggunakan algoritma bubble sort. Program harus menampilkan urutan angka sebelum dan sesudah diurutkan.*/

#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort();

int main()
{
    int angka[5];
    int size = sizeof(angka) / sizeof(angka[0]);

    for (int i = 0; i < size; i++)
    {
        cout << "Masukkan angke ke-" << i + 1 << ": ";
        cin >> angka[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << angka[i] << " ";
    }

    return 0;
}
void bubbleSort(int size, int angka[5]) { sort(angka, angka + size); }