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

node *InsEnd(node *Head, int x) 
{
    node *q;
    q = GetNode();
    q ->data = x;
    q ->next = nullptr;
    if (Head == nullptr) {
        Head = q;
    }
    else {
    node *p = Head;
    while (p->next != nullptr)
    {
        p = p->next;
    }
    p->next = q;
}

    return Head;
}

node *InsAft(node *Head,node *p, int x) {
    node *q, *r;
    r = GetNode();
    r -> data = x;
    q = p->next;
    p-> next = r;
    r -> next = q;
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



int main() {
    node *Head = NULL;
    Head = InsEnd(Head, 99);
    Head = InsBeg(Head, 1);
    Head = InsBeg(Head, 2);
    Head = InsBeg(Head, 3);
    Head = InsBeg(Head, 4);
    Head = InsBeg(Head, 5);
    Head = InsBeg(Head, 6);
    Head = InsBeg(Head, 7);
    Head = InsBeg(Head, 8);

    Head = InsEnd(Head, 100);
    node *p = Head;
    int pos = 1;
    if (pos == 1) {
        Head = InsBeg(Head, 400);
    }
    else {
        for (int i = 1; i < pos- 1 ; i++) {
            p = p-> next;
            Head = InsAft(Head,p, 300);
        }
    }

    Traverse(Head);
}