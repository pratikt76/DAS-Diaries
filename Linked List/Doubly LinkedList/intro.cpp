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

int getLength(Node *&head)
{
  int len = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    len++;
    temp = temp->next;
  }

  return len;
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

void insertAtTail(Node *&head, Node *&tail, int d)
{
  if (tail == NULL)
  {
    Node *temp = new Node(d);
    head = temp;
    tail = temp;
  }
  else
  {
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
  }
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{

  if (position == 1)
  {
    insertAtHead(head, tail, d);
    return;
  }

  Node *temp = head;
  int cnt = 1;

  while (cnt < position - 1)
  {
    temp = temp->next;
    cnt++;
  }

  if (temp->next == NULL)
  {
    insertAtTail(head, tail, d);
    return;
  }

  Node *nodeToInsert = new Node(d);

  nodeToInsert->next = temp->next;
  temp->next->prev = nodeToInsert;
  temp->next = nodeToInsert;
  nodeToInsert->prev = temp;
}

int main()
{
  // Node *node1 = new Node(12);
  Node *head = NULL;
  Node *tail = NULL;

  // Traverse the Doubly LL
  llprint(head);
  // cout << "Length of LinkedList is: " << getLength(head) << endl;

  // Insert At head of Doubly LL
  insertAtHead(head, tail, 11);
  llprint(head);
  // cout << "Length of LinkedList is: " << getLength(head) << endl;

  insertAtHead(head, tail, 10);
  llprint(head);
  // cout << "Length of LinkedList is: " << getLength(head) << endl;

  // Insert at tail of Doubly LL
  insertAtTail(head, tail, 13);
  llprint(head);

  insertAtTail(head, tail, 14);
  llprint(head);

  // insert at any position
  insertAtPosition(head, tail, 5, 18);
  llprint(head);
}