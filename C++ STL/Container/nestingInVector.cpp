#include <bits/stdc++.h>
using namespace std;

void printVectorPair(vector<pair<int, int>> v)
{
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i].first << " " << v[i].second << endl;
  }
}

int main()
{
  vector<pair<int, int>> v = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
  printVectorPair(v);

  // taking input

  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    }
}