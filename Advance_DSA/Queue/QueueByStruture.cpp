#include <iostream>
#include <vector>
#define size 10
using namespace std;

struct Queue
{
    int item[size];
    int rear;
    int front;
};

Queue Q;

void Initialize()
{
    Q.rear = -1;
    Q.front = 0;
}

bool IsEmpty()
{
    if (Q.rear - Q.front + 1 == 0)
    {
        return true;
    }
    else {
        return false;
    }
}

void EnQueue(int x) 
{
     if (Q.rear == size - 1)
        {
            cout << "Queue overflows\n";
            exit(1);
        }
    else {
    Q.rear++;
    Q.item[Q.rear] = x;
    }
}

int DeQueue()
{
     if (Q.rear - Q.front + 1 == 0)
        {
            cout << "Queue Underflows\n";
            exit(1);
        }
    else{
    int x = Q.item[Q.front];
    Q.front++;
    return x;
    }
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
    EnQueue(7);
    cout << DeQueue() << endl;
    cout << DeQueue() << endl;
    cout << DeQueue() << endl;
    cout << DeQueue() << endl;
    cout << DeQueue() << endl;
}