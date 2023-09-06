#include <iostream>
using namespace std;

class Hero
{
public:
  int health;
  char level;
  char *name;

  Hero()
  {
    cout << "This is a default constructor!!" << endl;
    name = new char[200];
  }

  Hero(int health)
  {
    this->health = health; // this keyword

    cout << "this is paramatrized constructor" << endl;
  }

  Hero(int health, char level, char *name)
  {
    this->health = health;
    this->level = level;

    cout << "this is a secound paramatrized constructor" << endl;
  }

  Hero(Hero &temp)
  {
    cout << "this is a copy constructor!!" << endl;
    this->health = temp.health;
    this->level = temp.level;
  }
};

int main()
{
  Hero Suresh;
  Hero Suresh1(22);
  Hero Suresh2(33, 'A', "pratik");

  // copy constructor
  Hero R(Suresh2);
  cout << R.health << endl;
  cout << R.level << endl;

  // shallow and deep copy

  char name[7] = "Bubber";
  Hero S(77, 'A', name);

  Hero S1(S);

  cout << S.name << endl;
  cout << S1.name << endl;
}