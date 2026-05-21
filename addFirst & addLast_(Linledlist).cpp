#include <bits/stdc++.h>

using namespace std;

class Node {
  public: int data;
  Node * Next;
  Node(int value) {
    data = value;
    Next = NULL;
  }
};

class Linkedlist {
  public:

    Node * Head;
  int size = 0;

  void addFirst(int val) {
    Node * newnode = new Node(val);
    newnode -> Next = Head;
    Head = newnode;
    size++;
  }

  void display() {
    Node * temp = Head;
    while (temp != NULL) {
      cout << temp -> data << " ";
      temp = temp -> Next;
    }
  }

  void addLast(int val) {
    Node * temp = Head;
    while (temp -> Next != NULL) {
      temp = temp -> Next;
    }
    Node * newnode = new Node(val);
    temp -> Next = newnode;
    size++;

  }
};



int main() {
  Linkedlist obj;
  obj.addFirst(10);
  obj.addFirst(20);
  obj.addFirst(30);
  obj.addFirst(40);


  obj.addLast(5);

  obj.display();
}