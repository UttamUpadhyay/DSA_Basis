#include <iostream>
using namespace std; 

//three constructor 1. default 2. paramatrized 3. object in constructor

class Example {
    int a, b;
    public :
    Example();
    Example( Example &);
    void display();
};
Example :: Example() {
    a = 10;
    b = 20;
}
Example :: Example(Example &E) {
    a = E.a;
    b = E.b;
}
void Example :: display() { 
    cout << "The value of a : " << a << endl;
    cout << "The value of b : " << b << endl;
}
int main() {
    Example E1;
    E1.display();
    Example E2(E1);
    E2.display();
}