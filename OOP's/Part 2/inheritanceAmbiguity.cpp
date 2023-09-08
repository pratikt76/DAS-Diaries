#include <iostream>
using namespace std;

class A
{
public:
  void func()
  {
    cout << "this one is from A" << endl;
  }
};

class B
{

public:
  void func()
  {
    cout << "this one is from B" << endl;
  }
};

class C : public A, public B
{
public:
  int key;
};

int main()
{
  C obj;

  // obj.func(); // wrong way

  obj.A::func();
  obj.B::func(); // right way
  return 0;
}