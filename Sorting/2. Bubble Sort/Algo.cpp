/*

Time complexity:- o(n^2)
          - Best Case:- o(n)
          - worst caser:- o(n^2)
Space complexity:- o(1)

*/

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    bool swapped = false;
    // we are taking loop from i = 1 to i = arr.size i.e. n
    // from round 1 to n-1

    for (int j = 0; j < n - i; j++) // here n-i is because we are not including last element after
                                    // every round because its already sorted
    {
      if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
      swapped = true;
    }
    if (swapped == false)
    {
      break; // Optimised Solution if given array is already sorted than this will avoid further round it
      // solution is optimised now
    }
  }
}
