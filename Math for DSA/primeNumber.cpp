#include <iostream>
using namespace std;

bool isPrime(int n)
{

  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      return 0;
    }
    else
    {
      return 1;
    }
  }
}

int main()
{

  int n;
  cin >> n;

  if (isPrime(n) == 1)
  {
    cout << "Given Numer is Prime!!" << endl;
  }
  else
  {
    cout << "Given Numer is Not Prime!!" << endl;
  }
}