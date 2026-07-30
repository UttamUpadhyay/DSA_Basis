 #include <iostream>

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

int main() {
 Stack S1(20);
 int M;
 cout << "\nEnter any Decimal number -: ";
 cin >> M;
 int count = 0;
 while (M != 0) {
    int r = M  % 8;
    S1.Push(r);
    M = M / 8;
    }
    cout << "\nIts octal is -: ";
    while (!S1.IsEmpty()) {
        int x = S1.Pop();
        cout << x;
    }
}