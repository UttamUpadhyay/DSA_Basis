#include <iostream>
using namespace std;

class Operation{
    private:
    int x, y;
    public:
    void getin(int , int );
    int total();
};

void Operation :: getin(int a, int b) {
   
     x = a;
     y = b;
}
int Operation :: total() {
    int r = x + y;
    return (r);
}
int main() {
    Operation O1;
    int x, y;
    cout << "Enter the numbers -: ";
    cin >> x >> y;
    O1.getin(x, y);
    int res =  O1.total();
    cout << "Sum of the numbers is: " << res;
}

