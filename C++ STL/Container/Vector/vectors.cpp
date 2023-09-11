#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v)
{

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
}

int main()
{
  vector<int> v;
  cout << v.size() << endl;

  int size;
  cin >> size;

  for (int i = 0; i < size; i++)
  {
    int x;
    cin >> x;
    v.push_back(x);
  }

  printVector(v);
  cout << endl;

  cout << "All the elements 3 with vector size 10" << endl;
  vector<int> v3(10, 3);
  printVector(v3);
}