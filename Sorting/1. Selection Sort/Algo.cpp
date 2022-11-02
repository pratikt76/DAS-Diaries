

// Rounds = n-1

// Space Complexity - o(1)
// Time Complexity - o(n^2)
//      -Best case - o(n^2)
//      -Worst case - o(n^2)

// USE CASE :-
// Whenever your array size is short than use selection sort

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int minIndex = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[minIndex])
        minIndex = j;
    }
    swap(arr[minIndex], arr[i]);
  }
}
