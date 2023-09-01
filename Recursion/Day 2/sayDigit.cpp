#include <iostream>
using namespace std;

void sayDigit(int n, string arr[])
{
  // base condition
  if (n == 0)
  {
    return;
  }
  // Processing

  int Digit = n % 10;
  n = n / 10;

  // Recursive relation
  sayDigit(n, arr);

  cout << arr[Digit] << " ";
}

int main()
{
  int n;
  cin >> n;
  string arr[10] = {"zero", "one", "two",
                    "three", "four", "five", "six",
                    "seven", "eight", "nine"};

  sayDigit(n, arr);
}