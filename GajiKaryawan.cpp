#include <iostream>
#include <string>
using namespace std;

int main(){
    string nama;
    int golongan, jamKerja , gajiPerjam;

    cout << "Masukkan nama anda: ";
    getline (cin, nama);
    cout << "Masukkan golongan anda: ";
    cin >> golongan;

    switch (golongan)
    {
    case 1:
        gajiPerjam = 25000;
        break;
    
    case 2:
        gajiPerjam = 35000;
        break;

    case 3:
        gajiPerjam = 50000;
        break;

    default:
        cout << "Data tidak valid!";
        return 0;
    }

    cout << "Masukkan jam kerja dan per minggu: ";
    cin >> jamKerja;

     int uangLembur = (jamKerja - 48) * 10000;

    if (jamKerja > 48) {
        bool uangLembur = true;
    }
    else {
        uangLembur = false;
    }

    int gajiMingguan = gajiPerjam * jamKerja;

    if (uangLembur) {
        cout << "Total Gaji " << nama << " per minggu: " << gajiMingguan + uangLembur;
    }
    else {
        cout << "Total Gaji " << nama << " per minggu: " << gajiMingguan;
    }
    
    return 0;
}