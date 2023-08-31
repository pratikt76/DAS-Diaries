#include <iostream>

using namespace std;

int fact(int n)
{
  // Base condition
  if (n == 0)
  {
    return 1;
  }

  // Recurcive relation

  return n * fact(n - 1);
}

int powerof2(int m)
{
  if (m == 1)
  {
    return 2;
  }

  return 2 * powerof2(m - 1);
}

void count1ton(int k)
{
  if (k == 0)
  {
    return;
  }

  count1ton(k - 1);
  cout << k << endl;
}

int main()
{
  // Factorial of n:

  int n;
  cin >> n;

  cout << "The Factorial of " << n << " is: " << fact(n);

  cout << endl;

  // Power of 2:

  int m;
  cin >> m;
  int ans = powerof2(m);
  cout << ans << endl;

  cout << endl;

  // Print 1 to n

  int k;
  cin >> k;
  cout << endl;
  count1ton(k);
}