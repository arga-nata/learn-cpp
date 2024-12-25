#include <iostream>
using namespace std;

int main()
{
  // Namespace = menyediakan solusi untuk mencegah konflik nama dalam proyek
  // besar. Setiap entitas membutuhkan nama yang unik. Namespace memungkinkan
  // entitas dengan nama yang sama selama namespace-nya berbeda.

  // Variabel string bernama 'nama' dengan nilai "Arga"
  string nama = "Arga";

  // Cetak "Halo " diikuti nilai dari variabel 'nama'
  cout << "Halo " << nama;

  return 0;
}
