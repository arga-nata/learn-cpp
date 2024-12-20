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
  human1.name = "Arganata";
  human1.occupation = "Programmer";
  human1.age = 21;

  cout << human1.name << '\n';
  cout << human1.occupation << '\n';
  cout << human1.age << '\n';

  human1.eat();
  human1.drink();
  human1.sleeping();

  return 0;
}