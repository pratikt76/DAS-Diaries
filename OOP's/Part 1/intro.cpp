#include <iostream>
using namespace std;

class Hero
{
  // properties

private:
  int health;
  char level;

public:
  // getter
  int getHealth()
  {
    return health;
  }

  char getLevel()
  {
    return level;
  }

  // setter

  void setHealth(int h)
  {
    health = h;
  }

  void setLevel(char ch)
  {
    level = ch;
  }
};

int main()
{
  // creation of object
  Hero ramesh;

  cout << sizeof(ramesh) << endl;

  // ramesh.health = 70;

  // cout << "size: " << sizeof(ramesh.health) << endl;
  // cout << "size: " << sizeof(ramesh.level) << endl;
  // cout << "ramesh health is: " << ramesh.health << endl;

  // getter and setter use:

  ramesh.setHealth(77);

  cout << "health using getter: " << ramesh.getHealth() << endl;

  ramesh.setLevel('A');

  cout << "health using getter: " << ramesh.getLevel() << endl;

  // static allocation

  Hero sahil;

  // dynamic allocation

  Hero *b = new Hero;
}