#include <iostream>
#include <vector>

using namespace std;

class Stack{
    public:
    vector < char > item;
    int top;
    Stack(int M) {
        item.resize(M);
        top = -1;
    }
    void Push(char x) {
        if (top == item.size() - 1) {
            cout << "Stacks Overflow\n";
        }
        else {
            top ++;
            item[top] = x;
        }
    }

};

int main() {
    

}