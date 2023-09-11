#include <bits/stdc++.h>

using namespace std;

int main()
{
  // how to write iterator code in short??

  // Range based loop

  vector<int> v = {2, 3, 5, 6, 7};

  for (int value : v)
  {
    cout << value << " ";
  }
  cout << endl;

  // for pairs
  vector<pair<int, int>> vp = {{2, 3}, {3, 4}, {4, 5}, {5, 6}, {6, 7}};
  for (pair<int, int> value : vp)
  {
    cout << value.first << " " << value.second << endl;
  }

  cout << "auto keyword starts from here <=> " << endl;

  auto a = 5;
  cout << a << endl;

  // codes from iT1.cpp

  vector<int> k = {1, 2, 3, 4, 5, 6};

  for (auto it = k.begin(); it != k.end(); it++)
  {
    cout << (*it) << " ";
  }

  // same for pairs
}