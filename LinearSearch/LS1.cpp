#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == key)
    {
      return 1;
    }
  }

  return 0;
}

int main()
{

  int arr[10] = {1, 2, 3, 4, 8, 9, 11, 23, 45, 10};

  cout << "Enter the number you want to find: " << endl;
  int key;
  cin >> key;

  bool found = linearSearch(arr, 10, key);

  if (found)
  {
    cout << "Given element is present in array" << endl;
  }
  else
  {
    cout << "Given element is absent in array" << endl;
  }

  return 0;
}