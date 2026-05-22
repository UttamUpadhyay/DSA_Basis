#include <bits/stdc++.h>

using namespace std;
class Node {
  public: int data;
  Node * next;

  Node(int val) {
    data = val;
    next = NULL;
  }
};
class Linkedlist {
  public: Node * Head = NULL;
  int size=0;


  void addFirst(int val) {
    Node * newnode = new Node(val);
    newnode -> next = Head;
    Head = newnode;
    size++;
  }

  void display() {
    Node * temp = Head;
    while (temp != NULL) {
      cout << temp -> data << " ";
      temp = temp -> next;
    }
    cout<<endl<<"Size of Linkedlist is -: "<<size;
  }
  void addLast(int val){
   
    Node * temp=Head;
    while(temp->next!=NULL){
      temp=temp->next;
    }
     Node* newnode=new Node(val);
     temp->next=newnode;
     size++;
  }
  // void dlt(int value){
  //   Node * temp=Head;
  //   while(temp->next!=value){
  //     temp=temp->next;
  //   }
  //   delete(temp->next);
  //   temp=temp->next;
    
  // }

};

int main() {
  Linkedlist obj;
  obj.addFirst(10);
  obj.addFirst(20);
  obj.addFirst(30);
  
  obj.addLast(5);
  obj.dlt(20);

  obj.display();


  // Node * temp = obj.Head;
  // while (temp != NULL) {
  //   cout << temp -> data << " ";
  //   temp=temp -> next;
  // }
  return 0;

}