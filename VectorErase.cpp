#include <vector>
#include <iostream>
using namespace std;

int main()
{
    // Deklarasi dan inisialisasi vector b
    vector<string> b = {"Arga", "Dimas", "Ilham", "Abbad", "Firman"};

    // Menghapus elemen dari indeks ke-1 hingga elemen terakhir
    b.erase(b.begin() + 1, b.end());

    cout << "Ketua: ";
    // Vector setelah menghapus elemen dari indeks ke-1 hingga elemen terakhir
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout << '\n';

    // Deklarasi dan inisialisasi vector a
    vector<string> a = {"Arga", "Dimas", "Ilham", "Abbad", "Firman"};

    // Menghapus elemen pada indeks-1 (elemen kedua)
    a.erase(a.begin() + 0);

    cout << "Anggota Kelompok: ";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << '\n';

    return 0;
}
