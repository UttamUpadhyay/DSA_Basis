#include <iostream>
#include <vector>

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

int main() {
    string S1;
    cin >> S1;
    int n = S1.size();
    Stack S(n);
    
    // Step 1: Push all characters onto the stack
    for (int i = 0; i < n; i++) {
        S.Push(S1[i]);
    }
    
    // Step 2: Pop and compare with the original string from the beginning
    bool isPalindrome = true;
    for (int i = 0; i < n; i++) {
        char x = S.Pop();
        if (x != S1[i]) {
            isPalindrome = false;
            break;
        }
    }
    
    // Step 3: Output the result
    if (isPalindrome) {
        cout << "Palindrome";
    } else {
        cout << "NotPalindrome";
    }

    return 0;
} 