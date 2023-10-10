#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  // constructor
  Node(int d)
  {
    this->data = d;
    this->next = NULL;
  }

  // destructor
  ~Node()
  {
    int value = this->data;
    if (this->next != NULL)
    {
      delete next;
      next = NULL;
    }
    cout << "MEMORY IS FREE " << value << endl;
  }
};

void insertElement(Node *&tail, int element, int d)
{

  // empty list
  if (tail == NULL)
  {
    Node *newNode = new Node(d);
    tail = newNode;
    newNode->next = newNode;
  }
  else
  {
    // non-empty list
    // assuming that the element is present in the list

    Node *curr = tail;

    while (curr->data != element)
    {
      curr = curr->next;
    }

    // element found -> curr is representing element wala node
    Node *temp = new Node(d);
    temp->next = curr->next;
    curr->next = temp;
  }
}

void print(Node *tail)
{

  Node *temp = tail;

  // empty list
  if (tail == NULL)
  {
    cout << "List is Empty " << endl;
    return;
  }

  do
  {
    cout << tail->data << " ";
    tail = tail->next;
  } while (tail != temp);

  cout << endl;
}

int main()
{
  Node *tail = NULL;

  // insert in empty list
  insertElement(tail, 5, 1);
  print(tail);

  insertElement(tail, 1, 2);
  print(tail);
}