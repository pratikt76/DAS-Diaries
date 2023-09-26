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

void insertAtHead(Node *&head, int d)
{

  // create new node
  Node *temp = new Node(d);

  temp->next = head;
  head = temp;
}

void insertAtTail(Node *&tail, int d)
{
  Node *temp = new Node(d);

  tail->next = temp;
  tail = tail->next;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)

{
  // if post == 1
  if (position == 1)
  {
    insertAtHead(head, d);
    return;
  }

  // traverse to the position we want to insert
  Node *temp = head;
  int cnt = 1;
  while (cnt < position - 1)
  {
    temp = temp->next;
    cnt++;
  }

  // if post == last element
  if (temp->next == NULL)
  {
    insertAtTail(tail, d);
    return;
  }

  // create node that we are going to insert
  Node *nodeToInsert = new Node(d);

  // do the head and node adjustment

  nodeToInsert->next = temp->next;
  temp->next = nodeToInsert;
}

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

  Node *head = node1;
  Node *tail = node1;

  printTheLinkedList(head);

  // Node *head1 = &node1;

  // Insert at head
  insertAtHead(head, 9);
  printTheLinkedList(head);

  insertAtHead(head, 8);
  printTheLinkedList(head);

  // Insert at tail
  insertAtTail(tail, 11);
  printTheLinkedList(head);

  // Insert at any positon
  insertAtPosition(head, tail, 1, 1);
  printTheLinkedList(head);
}