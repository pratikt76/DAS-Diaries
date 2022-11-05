#include <iostream>
using namespace std;

/*

Why :- 1) Adaptive technique
       2) stable

Space complexity o(1)
Time Complexity o{n^2}
best case - o(n)
worst case - o(n^2)

*/
void insertionSort(int n, int arr[])
{
  for (int i = 1; i < n; i++)
  {
    int temp = arr[i];
    int j = i - 1;
    for (; j >= 0; j--)
    {
      if (arr[j] > temp)
      {
        // shift
        arr[j + 1] = arr[j];
      }
      else
      {
        break;
      }
    }
    arr[j + 1] = temp;
  }
}

// Note - Watch Dry run for more clearity
