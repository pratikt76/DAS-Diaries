#include <iostream>
using namespace std;

// Function to print Array

void printArray(int arr[], int size)
{
  cout << "Printing the array: " << endl;

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  int array[5] = {5, 4, 11, 2, 7};
  int n = 5;
  printArray(array, 5);
  cout << endl
       << "Printing DONE" << endl;
  return 0;
}