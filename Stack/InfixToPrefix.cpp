#include <iostream>
#include <vector>
#include<string>
#include<algorithm>

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
// ----------------------------Declaration of Preceding function -------------------

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

// ----------------------------Prefix TO prefix-----------------------------------
string InfixToPrefix(string infix) {
    string prefix;
     Stack S(20);
    int i = infix.size() - 1;
    while (i > 0) {
        char symbol = infix[i];
        i--;
        if (symbol >= 'a' && symbol <= 'z' ||
            symbol >= 'A' && symbol <= 'B' ||
            symbol >= '0' && symbol <= '9') {
            prefix = prefix + symbol;
        }
        else {
            while (!S.IsEmpty() && !Prcd(symbol, S.StackTop())) {
                char x = S.Pop();
                prefix = prefix + x;
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
        prefix = prefix + x;
    }
    reverse(prefix.begin(), prefix.end());
    return prefix;

}

int main() {
    string infix;
    cin >> infix;
    cout << InfixToPrefix(infix);
}
