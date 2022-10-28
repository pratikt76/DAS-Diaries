#include <iostream>
using namespace std;

int pivotElement(int arr[], int n)
{

  int s = 0, e = n - 1;
  int mid = s + (e - s) / 2;

  while (s < e) // Here by doing <= ans goes into infinity // its not completly true idk the real ans if  curious than see previous video
  {
    if (arr[mid] >= arr[0]) // This Line Indicate the first line as on the first line all biggeer
    // number are present and the lowest number on first line is arr[0] and here the arr[mid] is bigger than
    // arr[0] so it can only lie on 1st line and not on 2nd line as , 2nd line contain all lower than arr[0] and a[mid] here
    {
      s = mid + 1;
    }
    else
    {
      e = mid;
    }

    mid = s - (e - s) / 2;
  }

  return s;
}

int main()
{

  int arr[5] = {3, 8, 10, 17, 1}; // We have a rotated array

  cout << "Pivot Element Is: " << arr[pivotElement(arr, 5)] << endl;

  return 0;
}

// Video Number 14 FIrst Example