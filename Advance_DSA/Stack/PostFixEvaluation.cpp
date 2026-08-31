#include <iostream>
#include <math.h>

#include <vector>

using namespace std;

class Stack {
    vector<int>item;
    int Top;
    public :
    // Constructor
    Stack(int s){
        item.resize(s);
        Top = -1;
    }
     
//    --------------------------------------
   void Push(int x) {
    if (Top == item.size() - 1) {
        cout << "Stack overflow\n";
    }
    else {
    Top++;
    item[Top] = x;
    }
   }
//    --------------------------------------
   int Pop() {
    if (Top == -1) {
        cout << "Stack umderflows\n";
        return '\0';
    }
    else{
    int x = item[Top];
    Top--;
    return x;
    }
   }
// ---------------------------------------

  int StackTop() {
    int x = item[Top];
    return x;
  } 
//  -----------------------------------------
 bool IsEmpty() {
    if (Top == -1) {
        return true;
    }
    else {
        return false;
    }
 }
};
int Evaluate(int a, int b, char op) {
    switch(op) {
    case '+' : return a + b;
    case '-' : return a - b;
    case '*' : return a * b;
    case '/' : return a / b;
    case '^' : return pow(a,b);
    }
    
    
}

int main() {
    string postfix;
    cin >> postfix;
    Stack S(20);
    int i = 0;
    while (i < postfix.size()) {
        int symbol = postfix[i];
        i++;
        if (symbol >= '0' && symbol <= '9') {
            S.Push(symbol - '0');
        }
        else {
            int b = S.Pop();
            int a = S.Pop();
            int ans = Evaluate(a, b, symbol);
            S.Push(ans);
        }
    }
    cout << S.StackTop() << endl;
}