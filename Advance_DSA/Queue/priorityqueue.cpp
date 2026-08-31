#include <iostream>
using namespace std;

struct node {
    int data;
    struct node* next;
};
node *GetNode()
{
    node *p; 
    p = new node;
    return p;
}
node *Enqueue(node * PQ, int x)
{
    node *curr, *prev;
    curr = PQ;
    prev = NULL;
    node * R;
    R = GetNode();
    R->data = x;

while (curr != NULL && x >= curr->data) 
{
    prev = curr;
    curr = curr -> next;
}
if (prev != NULL) 
{
    prev -> next = R;
    R -> next = curr;
}
else {
    R-> next = PQ;
    PQ = R;
}
}
int  dequeue(node * PQ)
{
    if (PQ == NULL)
    {
        cout << "Queue underflows" << endl;
        exit(1);
    }
    else {
    node * p;
    p = PQ;
    int x  = p->data;
    PQ = PQ -> next;
    free(p);
    return x;
    }
}
void Display(node * PQ)
{
    while (PQ !=NULL)
    {
        cout << PQ ->data << " ";
        PQ = PQ -> next;
    }
}
int main() 
{
    node * PQ = NULL;
    PQ = Enqueue(PQ, 1);
    PQ = Enqueue(PQ, 4);
    PQ = Enqueue(PQ, 2);
    PQ = Enqueue(PQ, 5);
    PQ = Enqueue(PQ, 8);
    PQ = Enqueue(PQ, 4);
    Display(PQ);
    
    // cout << dequeue(PQ) << endl;
    
    

}