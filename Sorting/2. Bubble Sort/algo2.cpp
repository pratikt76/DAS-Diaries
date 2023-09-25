#include <bits/stdc++.h>

using namespace std;

int main()
{

  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int k = 1;
  while (k < n)
  {
    for (int i = 0; i < n - k; i++)
    {
      if (arr[i] > arr[i + 1])
      {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }

    k++;
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}