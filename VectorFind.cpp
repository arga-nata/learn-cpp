#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> nama = {"Arga", "Dimas", "Ilham", "Abbad", "Firman"};
    auto index = find(nama.begin(), nama.end(), "Abbad");

    if (index != nama.end())
    {
        cout << "Elemen ditemukan pada indeks: " << distance(nama.begin(), index);
    }
    else
    {
        cout << "Elemen tidak ditemukan";
    }

    return 0;
}