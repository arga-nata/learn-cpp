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

    cout << "===============================================\n";
    cout << "= Menghitung Mean, Median dan Standar Deviasi =\n";
    cout << "===============================================\n";
    cout << "Mean: " << mean;
    cout << "\n-----------------------------------------------\n";

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

    if (ukuran % 2 == 0)
    {

        median = (nilai[ukuran / 2 - 1] + nilai[ukuran / 2]) / 2.0;
    }
    else
    {
        median = nilai[ukuran / 2];
    }
    cout << "\n-----------------------------------------------\n";
    cout << "Median: " << median;
    cout << "\n-----------------------------------------------\n";
}

void menghitungStandarDeviasi(int ukuran, int nilai[], int mean)
{
    double hasil, variansi;

    for (int i = 0; i < ukuran; i++)
    {
        variansi += pow(nilai[i] - mean, 2);
    }

    hasil = variansi / ukuran;
    double standarDeviansi = sqrt(hasil);
    cout << "Standar Deviasi: " << standarDeviansi;
    cout << "\n-----------------------------------------------";
}