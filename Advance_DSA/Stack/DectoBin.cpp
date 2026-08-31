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
    Stack S(20);
//-------------------------DECIMAL TO BINARY------------------------
    int N;
    cout << "Enter any Decimal Number -: ";
    cin >> N;
    while (N != 0) {
        int r = N % 2;
        S.Push(r);
        N = N / 2;
    }
    cout << "\nIts binary is -: ";
    while (!S.IsEmpty()) {
        int x = S.Pop();
        cout << x;
    }



    }

   
 


