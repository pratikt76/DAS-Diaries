#include <iostream>

using namespace std;

class Human
{
public:
  int height;
  int weight;
  int age;

public:
  int getAge()
  {
    return this->age;
  }

  void setWeight(int weight)
  {
    this->weight = weight;
  }
};

class Male : public Human
{
public:
  string color;

  void sleep()
  {
    cout << "Male Sleeping!" << endl;
  }
};

int main()
{
  Male obj1;
  cout << obj1.getAge() << endl;
  obj1.sleep();
}

// Mode of inheritance\

// Type of inheritance
/*
1)single
2>multi-level
3)multiple
4)hiearachy
5)hybrid
*/