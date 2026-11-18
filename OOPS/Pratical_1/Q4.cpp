#include <iostream>
using namespace std;

class B;

class A {
private:
    int a;

public:
    void geta(int);
    void displayb(B);
    friend class B;
};

class B {
private:
    int b;

public:
    void getb(int);
    void displaya(A);
    friend class A;
};

void A::geta(int y) {
    a = y;
}

void B::getb(int x) {
    b = x;
}

void A::displayb(B value) {
    cout << "Value of b: " << value.b << endl;
}

void B::displaya(A value) {
    cout << "Value of a: " << value.a << endl;
}

int main() {
    B B1;
    A A1;

    B1.getb(10);
    A1.geta(20);

    A1.displayb(B1);
    B1.displaya(A1);
}