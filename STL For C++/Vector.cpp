
/*Vectors are the same as dynamic arrays with the ability to resize itself
automatically when an element is inserted or deleted, with their storage
 being handled automatically by the container.*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> v;
  cout << "Capacity--> " << v.capacity() << endl;
  v.push_back(1);
  cout << "Capacity--> " << v.capacity() << endl;
  v.push_back(2);
  cout << "Capacity--> " << v.capacity() << endl;
  v.push_back(3);
  cout << "Capacity--> " << v.capacity() << endl;
  v.push_back(4);
  cout << "Capacity--> " << v.capacity() << endl;
  v.push_back(5);
  cout << "Capacity--> " << v.capacity() << endl; // Gives the capacity of a vector
                                                  // when we add elements more than capacity it get doble than than the previous capacity

  // v.size(), v.at(2) , v.front() , v.back() all array functions work here too.

  v.pop_back();
  // it just remove the last element

  // we can clear the vector using v.clear() only size of vector will get 0 not the capacity

    return 0;
}