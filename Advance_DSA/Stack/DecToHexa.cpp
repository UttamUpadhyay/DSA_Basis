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
    int N;
    cout << "Enter the decimal number -: ";
    cin >> N;
    char arr[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    while (N != 0) {
        int rem = N % 16;
        S.Push(rem);
       N =  N / 16;
    }
    while (!S.IsEmpty()) {
        
        int x = S.Pop();
        cout << arr[x];
    }
}