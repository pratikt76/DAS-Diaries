#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *prev;
  Node *next;

  // constructor
  Node(int d)
  {
    this->data = d;
    this->next = NULL;
    this->prev = NULL;
  }
};

void llprint(Node *&head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

void insertAtHead(Node *&head, Node *&tail, int d)
{

  if (head == NULL)
  {
    Node *temp = new Node(d);
    head = temp;
    tail = temp;
  }
  else
  {
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
  }
}

int main()
{
  Node *node1 = new Node(12);
  Node *head = node1;
  Node *tail = node1;
  llprint(head);
  insertAtHead(head, tail, 11);
  llprint(head);
  insertAtHead(head, tail, 10);
  llprint(head);
}