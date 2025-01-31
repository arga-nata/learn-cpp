#include <iostream>
using namespace std;

int main()
{
    int n = 0, angka1 = 0, angka2 = 1, fibonacci = 0;

    cout << "Masukkan jumlah bilangan Fibonacci yang ingin dicetak: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << angka1 << " ";
        fibonacci = angka1 + angka2;
        angka1 = angka2;
        angka2 = fibonacci;
    }

    return 0;
}