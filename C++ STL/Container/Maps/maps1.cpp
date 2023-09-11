#include <bits/stdc++.h>
using namespace std;

void printMap(map<int, string> m)
{
  cout << endl;
  cout << "The size of map is: " << m.size() << endl;
  for (auto it = m.begin(); it != m.end(); it++)
  {
    cout << it->first << " " << it->second << endl;
  }
}

int main()
{
  map<int, string> m;
  m[1] = "abc";
  m[5] = "cdc";
  m[3] = "acd";
  m.insert({4, "afg"});

  printMap(m);

  // find()

  cout << endl;

  auto it = m.find(7);

  if (it == m.end())
    cout << "No Value" << endl;
  else
    cout << (*it).first << "  " << (*it).second << endl;

  cout << endl;

  // erase()

  m.erase(3);

  printMap(m);

  // clear()

  m.clear();

  printMap(m);
}
