#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

double menghitungMean(int ukuran, int nilai[]);
void menghitungMedian(int nilai[], int ukuran);
void menghitungStandarDeviasi(int ukuran, int nilai[], int mean);

int main()
{
    int nilai[] = {92, 65, 74, 80, 80, 70, 78};
    int ukuran = sizeof(nilai) / sizeof(nilai[0]);

    double mean = menghitungMean(ukuran, nilai);

    cout << "============================\n";
    cout << "Mean: " << mean << "\n";
    cout << "============================\n";
    menghitungMedian(nilai, ukuran);

    menghitungStandarDeviasi(ukuran, nilai, mean);

    return 0;
}

double menghitungMean(int ukuran, int nilai[])
{
    double mean = 0;
    for (int i = 0; i < ukuran; i++)
    {
        mean += nilai[i];
    }
    return mean / ukuran;
}

void menghitungMedian(int nilai[], int ukuran)
{

    int median;

    cout << "Urutan: ";

    sort(nilai, nilai + ukuran);

    for (int i = 0; i < ukuran; i++)
    {
        cout << nilai[i] << " ";
    }
    cout << "\n============================\n";
    if (ukuran % 2 == 0)
    {

        median = (nilai[ukuran / 2 - 1] + nilai[ukuran / 2]) / 2.0;
    }
    else
    {
        median = nilai[ukuran / 2];
    }
    cout << "Median: " << median;
}

void menghitungStandarDeviasi(int ukuran, int nilai[], int mean)
{
    double hasil, variansi;

    for (int i = 0; i < ukuran; i++)
    {
        variansi += pow(nilai[i] - mean, 2);
    }

    cout << "\n============================";
    cout << '\n'
         << "Variansi: " << variansi << "/" << ukuran << '\n';
    hasil = variansi / ukuran;
    cout << "============================\n";
    cout << "Hasil variansi: " << hasil;
    cout << "\n============================\n";
    double standarDeviansi = sqrt(hasil);
    cout << "Standar deviasi: " << standarDeviansi;
    cout << "\n============================";
}