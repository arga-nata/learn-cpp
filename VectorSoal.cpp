/*Soal 6: Menghitung Faktor dari Sebuah Angka Tulis program untuk menghitung dan mencetak semua faktor dari sebuah angka
yang diberikan oleh pengguna.*/

#include <iostream>
#include <vector>
using namespace std;

void menghitungFaktor(int angka, vector<int> &faktor);

int main()
{
    int angka = 0;
    vector<int> faktor;

    cout << "Masukkan sebuah angka: ";
    cin >> angka;

    menghitungFaktor(angka, faktor);

    return 0;
}

void menghitungFaktor(int angka, vector<int> &faktor)
{
    for (int i = 1; i <= angka; i++)
    {
        if (angka % i == 0)
        {
            faktor.push_back(i);
        }
    }

    cout << "Faktor dari " << angka << " adalah: ";

    for (int i = 0; i < faktor.size(); i++)
    {
        cout << faktor[i] << " ";
    }
}