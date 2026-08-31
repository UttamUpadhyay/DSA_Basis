#include <iostream>

#include <stack>

using namespace std;

int main() {
    // stack<int>s;   //stack<string>s;
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // cout << s.top() << endl;
    // s.push(5);
    // s.push(6);

    // s.push(7);
    // while (!s.empty()) {
    //     cout << s.top() << " ";
    //     s.pop();
    // }

    // -------------------------------Decimal to Binary------------------------------------
    int decimal;
    cin >> decimal;
    stack<int>s;
    while(decimal != 0) {
        int r = decimal % 2;
        s.push(r);
        decimal /= 2;
    }
    while(!s.empty()){
        int x = s.top();
        cout << x;
        s.pop();
    }

}