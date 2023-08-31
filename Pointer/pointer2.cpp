#include <iostream>
using namespace std;

int main()
{ /*
   int arr[10] = {2, 4, 6};
   cout << "Address of arr  " << arr << endl;
   cout << "Address of arr by & " << &arr[0] << endl;
   cout << *arr << endl;
   cout << *arr + 1 << endl;
   cout << *(arr + 1) << endl; */

  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = &arr[0];

  cout << sizeof(arr) << endl;
  cout << sizeof(ptr) << endl;
  cout << sizeof(*ptr) << endl;
}
