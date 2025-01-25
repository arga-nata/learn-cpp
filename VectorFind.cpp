#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> nama = {"Arga", "Dimas", "Ilham", "Abbad", "Firman"};
    auto index = find(nama.begin(), nama.end(), "Eko");

    if (index != nama.end())
    {
        cout << "Elemenm diitemukan pada indeks: " << distance(nama.begin(), index);
    }
    else
    {
        cout << "Elemen tidak ditemukan";
    }

    return 0;
}