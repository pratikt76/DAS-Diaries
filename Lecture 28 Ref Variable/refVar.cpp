#include <iostream>
using namespace std;

int main()
{

  int i = 5;

  // create referance variable

  int &j = i;

  i++;
  cout << "i is: " << i << endl;
  j++;
  cout << "i is: " << i << endl;
  i++;
  cout << "j is: " << j << endl;

  cout << "add of i: " << &i << endl;
  cout << "add of j: " << &j << endl;
}