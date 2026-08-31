#include <iostream>
#include<vector>
using namespace std;

class Stack{
    vector<int>item;
    int top;
    public:
    Stack(int M) {
        item.resize(M);
        top = -1;
    }

// *************************************************************

 void Push(int val) {
    if (top == item.size() - 1) {
        cout << "Stack Overflow\n";
    }
    else{
    top++;
    item[top] = val;
    }
 }
//**************************************************************

 int Pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
    }
    else {
    int x = item[top];
    top--;
    return x;
    }
 }
 //************************************************************* 

 int StackTop() {
    int x = item[top];
    return x;
 }
// **************************************************************

bool Isempty() {
    if (top == -1) {
        return true;
    }
    else {
        return false;
    }
}
};

int main() {
  Stack S(10);
  

}