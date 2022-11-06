#include <iostream>
#include <deque>
using namespace std;

int main()
{
  deque<int> d;

  // push back and front
  d.push_back(1);
  d.push_front(2);
  d.push_front(2);

  for (int i = 0; i < d.size(); i++)
  {
    cout << d[i] << endl;
  }

  // pop back and front
  d.pop_back();
  d.pop_front();
  // printing
  for (int i = 0; i < d.size(); i++)
  {
    cout << d[i] << endl;
  }

  // d.at(2); d.front(); d.back(); will work here
}