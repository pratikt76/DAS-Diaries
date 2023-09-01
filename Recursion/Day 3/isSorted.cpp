#include <iostream>

using namespace std;

bool isSorted(int arr[], int size)
{
  // base case

  if (size == 0 || size == 1)
  {
    return true;
  }

  if (arr[0] > arr[1])
  {
    return false;
  }
  else
  {
    bool remPart = isSorted(arr + 1, size - 1);
    return remPart;
  }
}

int main()
{
  int arr[5] = {2, 4, 5, 8, 9};

  int size = 5;

  bool ans = isSorted(arr, size);
  cout << ans << endl;
}