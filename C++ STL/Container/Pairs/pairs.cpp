#include <bits/stdc++.h>
using namespace std;

int main()
{
  // pairs define

  pair<int, string> p;

  // cin element

  // p = make_pair(1, "abc");
  p = {1, "abc"}; // this also work

  // cout pair

  cout << endl;
  cout << p.first << " " << p.second << endl;

  // Making a Pair of array

  pair<int, int> p_array[3];
  p_array[0] = {1, 2};
  p_array[1] = {2, 3};
  p_array[2] = {3, 4};

  cout << endl;

  // printing it

  for (int i = 0; i < 3; i++)
  {
    cout << p_array[i].first << " " << p_array[i].second << endl;
  }
}