#include <iostream>
using namespace std;

class Hero
{
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

  // static
  Hero a;
  a.setHealth(77);
  a.setLevel('A');

  cout << "    " << a.getHealth() << "   " << a.getLevel() << endl;

  // dynamic
  Hero *b = new Hero;
  b->setHealth(33);
  b->setLevel('S');

  cout << "    " << b->getHealth() << "   " << b->getLevel() << endl;
}