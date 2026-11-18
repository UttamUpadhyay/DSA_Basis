#include <iostream>
using namespace std;

class Example {
    int a, b;
    public :
    Example(int, int);
    void display();
    Example sum(Example);
};

Example :: Example(int x, int y) {
    a = x;
    b = y;
}

void Example :: display() {
    cout << "The value of a : " << a << endl;
    cout << "The value of b : " << b << endl;
}

Example Example :: sum(Example E1) {
    Example E2(0, 0);
    E2.a = a + E1.a;
    E2.b = b + E1.b;
    return E2;
}

int main() {
    Example E1(10, 20), E2(30, 40);
    Example E3 = E1.sum(E2);
    E4.display();
    E3.display();
}