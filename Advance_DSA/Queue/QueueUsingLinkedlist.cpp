#include <iostream>
#include <vector>
using namespace std;

struct node{
    int data;
    struct node *next;
};

node *GetNode()
{
    node *p; 
    p = new node;
    return p;
}
node *rear, *front;
 
void EnQueue(int x)
{
    node *temp;
    temp = GetNode();
    temp -> data = x;
    temp -> next = NULL;
    if (rear != NULL)
    {
        rear-> next = temp;
    }
    else {
        front = temp;
    }
    rear = temp;
}

int DeQueue()
{
    node *p = front;
    front = front -> next;
    int x = p->data;
    delete(p);
    return x;
}
void Initialize() 
{
    rear = NULL;
    front = NULL;
}

int main() 
{
    Initialize();
    EnQueue(1);
    EnQueue(2);
    EnQueue(3);
    EnQueue(4);
    EnQueue(5);
    EnQueue(6);
    cout << DeQueue() << endl;
    cout << DeQueue() << endl;
    cout << DeQueue() << endl;
    cout << DeQueue() << endl;
    cout << DeQueue() << endl;
    cout << DeQueue() << endl;


}