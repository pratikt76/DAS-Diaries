#include <iostream>
#include <array>
using namespace std;

int main()
{

  array<int, 4> a = {1, 2, 3, 4}; // delcare the array
  int size = a.size();            // size of array

  for (int i = 0; i < size; i++) // Printing the array
  {
    cout << a[i] << endl;
  }

  // Element at any index:
  cout << "element at index 2: " << a.at(2) << endl;

  // First and last element:
  cout << "element at First: " << a.front() << endl;
  cout << "element at Last: " << a.back() << endl;
  return 0;
}