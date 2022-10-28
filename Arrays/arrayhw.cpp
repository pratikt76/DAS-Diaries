#include <iostream>
using namespace std;

// Sum of all element in an array

int sumOfArray(int arr[], int n)
{
  int sum = 0;

  for (int i = 0; i < n; i++)
  {
    sum = sum + arr[i];
  }

  return sum;
}

int main()
{

  // Input the array
  int arr[5];

  for (int i = 0; i < 5; i++)
  {
    cin >> arr[i];
  }

  int sum1 = sumOfArray(arr, 5);

  cout << "The sum of all the number in an array is: " << sum1 << endl;

  return 0;
}