
// Question on Code Studio
// Lecture 20: Solving LeetCode/CodeStudio Questions [Arrays]

#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> reverseArray(vector<int> v, int m)
{
  int start = m + 1;
  int end = v.size() - 1;
  while (start <= end)
  {
    swap(v[start], v[end]);
    start++;
    end--;
  }
  return v;
}
