#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v = {2, 3, 5, 6, 7};
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;

  // 1

  vector<int>::iterator it = v.begin();

  cout << (*it) << endl;
  cout << (*it + 1) << endl;

  // 2
  // printing whole array
  for (it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " ";
  }

  cout << endl;
  // 3
  // vector pair

  vector<pair<int, int>> vp = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
  vector<pair<int, int>>::iterator it = vp.begin();
  cout << (*it) << endl;
  return 0;
}