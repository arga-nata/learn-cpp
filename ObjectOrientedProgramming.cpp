#include <iostream>
using namespace std;

class Human {
public:
  string name;
  string occupation;
  int age;

  void eat() { cout << "This person is eating\n"; }
  void drink() { cout << "This person is drinking\n"; }
  void sleeping() { cout << "This person is sleeping\n"; }
};
int main() {
  Human human1;
  human1.name;

  return 0;
}