#include <iostream>
using namespace std;

int main()
{
  int num;
  num = 5;

  int *ptr = &num;

  cout << *ptr << endl;
  cout << ptr << endl;

  // trying

  int i = 3;

  int *p = &i;
  cout << *p << endl;
  cout << ++(*p) << endl;
  cout << (*p)++ << endl;
}