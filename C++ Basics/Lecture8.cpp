#include <iostream>
using namespace std;

int main()
{
  // Calculator
  cout << "Enter First Value: ";
  int a;
  cin >> a;

  cout << "Enter Second Value: ";
  int b;
  cin >> b;

  cout << "Enter Opration To Be Perforemed: ";
  char opration;
  cin >> opration;

  switch (opration)
  {
  case '+':
    cout << "The Addition of a and b is: " << a + b << endl;
    break;

  case '-':
    cout << "The Substraction of a and b is: " << a - b << endl;
    break;

  case '*':
    cout << "The Multiplication of a and b is: " << a * b << endl;
    break;

  case '/':
    cout << "The Division of a and b is: " << a / b << endl;
    break;

  case '%':
    cout << "The Modulus of a and b is: " << a % b << endl;
    break;

  default:
    cout << "The Opration You Enter is Not Valid" << endl;
    break;
  }
}