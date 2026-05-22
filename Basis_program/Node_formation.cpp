#include <bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node* Next;
  Node (int value){
  data=value;
  Next= NULL;
}


};

int main() {
 Node *head=new Node(10);
 head->Next=new Node(20);
 head->Next->Next=new Node(30);

}
