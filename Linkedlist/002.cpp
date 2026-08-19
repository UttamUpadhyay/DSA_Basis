#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

node *GetNode()
{
    node * p;
    p =(node *) malloc(sizeof(struct node));
    return p;
}
node *InsBeg(node * Head, int x) 
{
    node *p;
    p = GetNode();
    p -> data = x;
    p -> next = Head;
    Head = p;
    return Head;
}
void Traverse(node *Head) 
{
   node *p;
   p = Head;
   while (p != nullptr) {
    cout << p->data << " ";
    p = p->next;
    
   } 
}
node * delbeg(node * Head) 
{
    node * p = Head;
    Head = Head->next;
    int x = p->data;
    free(p);
    cout << "Deleted Node is => " << x << endl;
    return Head;
}
node * delaft(node * Head, node * p) 
{
    node * q = p -> next;
    node * r = q -> next;
    p -> next = r;
    int x = q -> data;
    free(q);
    cout << "Deleted node is => " << x<<endl;
    return Head;
}

    int main() {
    node *Head = NULL;
    Head = InsBeg(Head, 1);
    Head = InsBeg(Head, 2);
    Head = InsBeg(Head, 3);
    Head = InsBeg(Head, 4);
    Head = InsBeg(Head, 5);
    Head = InsBeg(Head, 6);
    Head = InsBeg(Head, 7);
    Head = InsBeg(Head, 8);
    Traverse(Head);
    cout << endl;
    Head = delbeg(Head);
    Traverse(Head);
    node * p = Head -> next -> next;
    
    cout << endl;
    Head = delaft(Head, p);
    Traverse(Head);
    
    

}