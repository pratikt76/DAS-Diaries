#include <iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (arr[i][j] == target)
      {
        return 1;
      }
    }
  }
  return 0;
}

int main()
{
  int arr[3][3];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> arr[i][j];
    }
  }

  // is Present

  int target;
  cin >> target;

  if (isPresent(arr, target, 3, 3) == 1)
  {
    cout << "Number is Present!!" << endl;
  }
  else
  {
    cout << "Number is not present!!" << endl;
  }
}