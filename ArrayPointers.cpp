#include <iostream>
using namespace std;

int main()
{
    // Mencetak header untuk bagian elemen variabel angka
    cout << "==========================\n";
    cout << "  Elemen Variabel Angka:  \n";
    cout << "==========================\n";

    // Mendeklarasikan array integer 'angka' dengan 4 elemen
    int angka[] = {1, 2, 3, 4};

    // Mendeklarasikan pointer 'ptr' yang menunjuk ke elemen pertama dari array 'angka'
    int *ptr = &angka[0];

    // Loop untuk mengiterasi dan mencetak setiap elemen dari array menggunakan pointer
    for (int i = 0; i < sizeof(angka) / sizeof(angka[0]); i++)
    {
        // Mencetak elemen ke-i dari array
        cout << "Elemen " << i << ": " << *(ptr + i) << '\n';
    }

    // Mencetak header untuk bagian alamat memori elemen
    cout << "=========================\n";
    cout << "  Alamat Memori Elemen:  \n";
    cout << "=========================\n";

    // Loop untuk mengiterasi dan mencetak alamat memori setiap elemen dari array
    for (int i = 0; i < sizeof(angka) / sizeof(angka[0]); i++)
    {
        // Mencetak alamat memori dari elemen ke-i (seharusnya tanpa dereference *)
        cout << "Alamat memori elemen " << i << ": " << (ptr + i) << '\n';
    }

    return 0;
}
