#include <iostream>
#include <vector>
using namespace std;

class CQueue
{
    int front;
    int rear;
    vector<int>item;
    public:
    CQueue(int size) {
        item.resize(size);
        rear = item.size() - 1;
        front = item.size() - 1;
    }
    bool IsEmpty() 
    {
        if (rear == front) 
        {
            return true;
        }
        else {
            return false;
        }
    }
    void EnQueue(int x)
    {
        if ((rear + 1) % item.size() == front) 
        {
            cout << "Queue Overflows\n";
            exit(1);
        }
        else {
            rear = (rear + 1) % item.size();
            item[rear] = x;
        }
    }
    int DeQueue() 
    {
        if (IsEmpty())
        {
            cout << "Queue Underflows\n";
            exit (1);
        }
        else {
            front = (front + 1) % item.size();
            int x = item[front];
            return x;
        }
    }
};

int main() {
    CQueue CQ(7);
    CQ.EnQueue(1);
    CQ.EnQueue(2);
    CQ.EnQueue(3);
    CQ.EnQueue(4);
    CQ.EnQueue(5);
    CQ.EnQueue(6);
    // CQ.EnQueue(7);
    // CQ.EnQueue(8);
    // CQ.EnQueue(9);
    cout << CQ.DeQueue() << endl;
    cout << CQ.DeQueue() << endl;
    cout << CQ.DeQueue() << endl;
    // cout << CQ.DeQueue() << endl;
    // cout << CQ.DeQueue() << endl;
    // cout << CQ.DeQueue() << endl;
    // cout << CQ.DeQueue() << endl;
    // cout << CQ.DeQueue() << endl;




}