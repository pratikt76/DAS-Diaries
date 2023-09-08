#include <iostream>
using namespace std;

class Student
{
private:
  string name;
  int age;
  int height;

public:
  string getAge()
  {
    return this->name;
  }
};
int main()
{
  Student no1;

  cout << "Cheaking if everything is fine!!" << endl;
}