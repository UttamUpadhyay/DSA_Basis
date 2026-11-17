#include <iostream>
using namespace std;

class Example {
    int a, b;
    public :
    Example(int, int);
    void display();
    void sum(Example , Example);
};

Example :: Example(int x, int y){
    a = x;
    b = y;
}
void Example :: display() {
    cout << "The value of a : " << a << endl;
    cout << "The value of b :" << b << endl;
}

void Example::sum(Example E1, Example E2) {
    cout << "The sum of a : " << E1.a + E2.a << endl;
    cout << "The sum of b : " << E1.b + E2.b << endl;
}
int main() {
    Example E1(10, 20), E2(30, 40);
    E1.sum(E1, E2);
    E1.display();
    E2.display();
}
