#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
  int data;
  Node *next;

  // constructor

  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};

void printTheLinkedList(Node *&head)
{
  Node *temp = head;

  while (temp != NULL)
  {
    cout << temp->data << " ";

    temp = temp->next;
  }

  cout << endl;
}

int main()
{
  Node *node1 = new Node(10); // creating in heap memory
  cout << node1->data << endl;
  cout << node1->next << endl;

  Node *head = node1;
  Node *tail = node1;

  printTheLinkedList(head);
}