#include <iostream>

using namespace std;

bool isPresent(int arr[], int size, int key)
{
  if (size == 0)
  {
    return false;
  }
  if (arr[0] == key)
  {
    return true;
  }
  else
  {
    bool remPart = isPresent(arr + 1, size - 1, key);
    return remPart;
  }
}

int main()
{

  int key;
  cout << "Enter The Key: " << endl;
  cin >> key;

  int arr[5] = {3, 5, 1, 2, 6};
  int size = 5;

  bool ans = isPresent(arr, size, key);
  if (ans)
  {
    cout << "The Key is Present!!" << endl;
  }
  else
  {
    cout << "The key is not Present!!" << endl;
  }
}