#include <bits/stdc++.h>

// Note to myself - showing error becz the o/p does not want empty string

void solve(string str, string output, int index, vector<string> &ans)
{
  // base case
  if (index >= str.length())
  {
    if (output.length() > 0)
    {
      ans.push_back(output);
    }

    return;
  }

  // exclude
  solve(str, output, index + 1, ans);

  // include
  char element = str[index];
  // element.push_back(str(index));
  output.push_back(element);

  solve(str, output, index + 1, ans);

  // return ans;
}

vector<string> subsequences(string str)
{

  vector<string> ans;
  string output = "";

  int index = 0;

  solve(str, output, index, ans);
  return ans;
}
