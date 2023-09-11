#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v[5];

  // take input
  for (int i = 0; i < 5; i++)
  {

    int sizeOfIndividualVector;
    cout << "Enter the size of individual vector: " << endl;
    cin >> sizeOfIndividualVector;

    for (int j = 0; j < sizeOfIndividualVector; j++)
    {
      int x;
      cin >> x;

      v[i].push_back(x);
    }
  }

  // take print

  cout << "Printing the given array " << endl;

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < v[i].size(); j++)
    {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }
}