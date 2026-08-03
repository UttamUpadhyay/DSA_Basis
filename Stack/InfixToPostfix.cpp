#include <iostream>
#include <vector>
#include<string>

using namespace std;

class Stack {
public:
    vector<char> item;
    int top;
    
    Stack(int M) {
        item.resize(M);
        top = -1;
    }
    
    void Push(char x) {
        if (top ==  item.size() - 1) {
            cout << "Stack overflow\n";
        } else {
            top++;
            item[top] = x;
        }
    }
    
    char Pop() {
        if (top == -1) {
            cout << "Stack underflow\n";
            return '\0';
        } else {
            char x = item[top];
            top--;
            return x;
        }
    }
    
    char StackTop() {
        if (top == -1) {
            return '\0'; // Handle empty stack gracefully
        }
        return item[top];
    }
    
    bool IsEmpty() {
        return top == -1;
    }
};

// ------------------Declaration of Precedence function-----------------------  
bool Prcd(char a, char b) {
    if (a == '(' || b == '('){       // Rule - 1, 2, 4
        return false;
    }
    if (b == ')') {
        return true; }            //Rule - 3
    if (a == '^' || a == '*' || a == '%' || a == '/'){
        if (b == '^') {
            return false;
        }
        else {
            return true;
        }
    }
    if (a == '+' || a == '-'){
        if (b == '+' || b == '-') {
            return true;
        }
        else {
            return false;
        }
    }
}

// -------------------Declaration of InfixTOPostfix function---------------------
string InfixToPost(string infix) {
    string postfix;
    Stack S(20);
    int i = 0;
    while (i < infix.size()) {
        char symbol = infix[i];
        i++;
        if (symbol >= 'a' && symbol <= 'z' ||
            symbol >= 'A' && symbol <= 'B' ||
            symbol >= '0' && symbol <= '9') {
            postfix = postfix + symbol;
        }
        else {
            while (!S.IsEmpty() && Prcd(S.StackTop(), symbol)) {
                char x = S.Pop();
                postfix = postfix + x;
            }
            if (symbol != ')') {
                 S.Push(symbol);
            }
            else {
                S.Pop();
            }
           
        }
    }
    while (!S.IsEmpty()) {
        char x = S.Pop();
        postfix = postfix + x;
    }
    return postfix;

}

int main() {
    string infix;
    cin >> infix;
    cout << InfixToPost(infix);
}