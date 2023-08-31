#include <iostream>
using namespace std;

int main()
{

  int n;
  cin >> n;

  // Creating the dynamic 2d array
  int **arr = new int *[n];
  for (int i = 0; i < n; i++)
  {
    arr[i] = new int[n];
  }
}