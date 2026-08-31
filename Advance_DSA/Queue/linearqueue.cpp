#include <iostream>
#include <vector>
using namespace std;

class Queue
{
    vector<int>item;
    int rear;
    int front;
    public:
    
    Queue(int size)
    {
        item.resize(size);
        rear = -1;
        front = 0;
    }
    bool IsEmpty()
    {
        if (rear - front + 1 == 0)
        {
            return true;
        }
        else {
            return false;
        }
    }
    void EnQueue(int x)
    {
        if (rear == item.size() - 1)
        {
            cout << "Queue overflows\n";
            exit(1);
        }
        else {
        rear++;
        item[rear] = x;
        }
    }
    int DeQueue() 
    {
         if (rear - front + 1 == 0)
        {
            cout << "Queue Underflows\n";
            exit(1);
        }
        else {
        int x;
        x = item[front];
        front++;
        return x;
        }
    }
};


int main() 
{
    Queue Q(7);
    Q.EnQueue(1);
    Q.EnQueue(2);
    Q.EnQueue(3);
    Q.EnQueue(4);
    Q.EnQueue(5);
    Q.EnQueue(6);
   cout << Q.DeQueue() << endl;
   cout << Q.DeQueue() << endl;
   cout << Q.DeQueue() << endl;
   cout << Q.DeQueue() << endl;
   cout << Q.DeQueue() << endl;
   cout << Q.DeQueue() << endl;
   cout << Q.DeQueue() << endl;
   


}