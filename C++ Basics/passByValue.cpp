#include <iostream>
using namespace std;

int update(int a)
{
  int ans = a * a;
  cout << ans << endl;
  return ans;
}

int main()
{
  int a = 14;
  update(a);
  cout << a << endl;
}