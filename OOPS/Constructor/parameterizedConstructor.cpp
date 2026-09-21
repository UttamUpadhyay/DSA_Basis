//Second type of Constructor : Parameterized Constructor
#include <iostream>
using namespace std;

class Example {
    int a, b;
    public : 
    Example(int , int);
    void display();
};
Example :: Example(int x, int y) {
    a = x;
    b = y;
}
void Example :: display() {
    cout << a << " " << b << endl;
}

int main() {
    Example E1 = Example(10, 20);   //Calling constructor through explicitially 
    E1.display();
    Example E2(100, 200);           //Calling constructor through implicitially 
    E2.display();
}