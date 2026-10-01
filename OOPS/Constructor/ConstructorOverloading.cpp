#include <iostream>
using namespace std;

class Example {
    int a, b;

public:
    Example();
    Example(int, int);
    Example(Example &);
    void display();
};

Example::Example() {
   cout << "Enter the number : ";
   cin >> a >> b;
}

Example::Example(int x, int y) {
    a = x;
    b = y;
   
}

Example::Example(Example &E1) {
    a = E1.a;
    b = E1.b;
}

void Example::display() {
    cout << "The value of a : " << a << ", The value of b : " << b << endl;
}

int main() {
    Example E1;
    E1.display();
    Example E2(45, 34);
    E2.display();
    Example E3(E2);
    E3.display();
}