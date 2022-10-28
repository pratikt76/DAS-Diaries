#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void reverse(int arr[], int size)
{
  int start = 0;
  int end = size - 1;
  while (start <= end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

int main()
{
  int arr[5] = {5, 4, 3, 2, 1};
  int brr[5] = {1, 2, 3, 4, 5};

  reverse(arr, 5);
  reverse(brr, 5);

  printArray(arr, 5);
  printArray(brr, 5);
  return 0;
}