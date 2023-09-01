#include <iostream>
using namespace std;

bool binarySearch(int *arr, int start, int end, int key)
{
  // basecase

  if (start > end)
  {
    return false;
  }

  int mid = start + (end - start) / 2;

  if (arr[mid] == key)
  {
    return true;
  }

  if (arr[mid] > key)
  {
    return binarySearch(arr, start, mid - 1, key);
  }
  else
  {
    return binarySearch(arr, mid + 1, end, key);
  }
}

int main()
{
  int arr[6] = {2, 4, 6, 10, 14, 18};
  int size = 6;
  int key;
  cin >> key;

  cout << "The Element is: " << binarySearch(arr, 0, 5, key);
}