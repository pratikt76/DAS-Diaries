
#include <iostream>

using namespace std;

int getLength(char arr[])
{

  int count = 0;
  for (int i = 0; arr[i] != '\0'; i++)
  {
    count = count + 1;
  }
  return count;
}

void reverse(char arr[], int l)
{
  int start = 0;
  int end = l - 1;

  while (start < end)
  {
    swap(arr[start++], arr[end--]);
  }
}

int main()
{
  // char array

  char name[20];

  cout << "Enter your name: " << endl;
  cin >> name;

  int length = getLength(name);
  cout << "Length: " << length << endl;
  reverse(name, length);
  cout << "Reverse is: " << name << endl;
}