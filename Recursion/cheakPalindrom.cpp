#include <iostream>

using namespace std;

bool cheakPalindrom(string str, int i, int j)
{
  // base case

  if (i > j)
  {
    return true;
  }

  if (str[i] != str[j])
  {
    return false;
  }
  else
  {

    return cheakPalindrom(str, ++i, --j);
  }
}

int main()
{
  string name = "HannaH";

  bool isPalindrom = cheakPalindrom(name, 0, name.length() - 1);
  cout << isPalindrom << endl;
}