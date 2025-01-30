#include <iostream>
using namespace std;

int main()
{ // pointers = variabel yang menyimpan alamat memori dari variabel lain
  // terkadang lebih mudah bekerja dengan alamat memori
  // & adalah operator address-of
  // * adalah operator dereference

  string name = "Arganata";
  int age = 21;
  string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

  string *pName = &name;            // Pointer ke variabel name
  int *pAge = &age;                 // Pointer ke variabel age
  string *pFreePizzas = freePizzas; // Pointer ke array freePizzas

  cout << *pName << '\n';       // Menampilkan nilai yang ditunjuk oleh pName
  cout << *pAge << '\n';        // Menampilkan nilai yang ditunjuk oleh pAge
  cout << *pFreePizzas << '\n'; // Menampilkan nilai yang ditunjuk oleh pFreePizzas

  return 0;
}
