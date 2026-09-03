#include <iostream>
using namespace std;

class Example {
    int a;
    static int n;
    public:
    void get(int, int);
    static void displayStatic();
    void displayboth();
};
int Example::n = 0;
void Example:: get(int x, int y) {
    a = x;
    n = y;
}
void Example::displayStatic(){
    // cout << "Static N : " << n << endl;
    cout << "Static n : " << n << endl;
   
}
void Example::displayboth() {
    cout <<"a : " << a << " || " << "n : " << n << endl;
}


int main() {
    Example E1;
    E1.get(10, 39);
    Example::displayStatic();
    E1.displayboth();
}