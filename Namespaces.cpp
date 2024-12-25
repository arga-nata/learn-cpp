#include <iostream>
using namespace std;

int main() {
  // Namespace = menyediakan solusi untuk mencegah konflik nama dalam proyek
  // besar. Setiap entitas membutuhkan nama yang unik. Namespace memungkinkan
  // entitas dengan nama yang sama selama namespace-nya berbeda.

  string nama = "Arga";    // Variabel string bernama 'nama' dengan nilai "Arga"
  cout << "Halo " << nama; // Cetak "Halo " diikuti nilai dari variabel 'nama'

  return 0;
}
