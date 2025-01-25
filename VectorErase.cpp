#include <vector>
#include <iostream>
using namespace std;

int main()
{

    vector<string> a = {"Arga", "Dimas", "Ilham", "Abbad", "Firman"};
    a.erase(a.begin() + 1);

    cout << "Vector dengan indeks ke-1 yang dihapus: ";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << '\n';

    vector<string> b = {"Arga", "Dimas", "Ilham", "Abbad", "Firman"};
    b.erase(b.begin() + 1, b.end()) + 4;

    cout << "Vector dengan indeks ke-1 sampai indeks terakhir yang dihapus: ";
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout << '\n';

    return 0;
}