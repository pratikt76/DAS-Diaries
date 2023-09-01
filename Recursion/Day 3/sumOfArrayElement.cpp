#include <iostream>
using namespace std;

int sumofarray(int arr[], int size)
{
  // basecase
  if (size == 1)
  {
    return arr[0];
  }

  int sum = arr[0];
  sum = sum + sumofarray(arr + 1, size - 1);

  return sum;
}

int main()
{
  int arr[5] = {2, 4, 9, 9, 9};
  int size = 5;

  cout << sumofarray(arr, size) << endl;
}