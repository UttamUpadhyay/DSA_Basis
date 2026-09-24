#include <iostream>
using namespace std;  

class Test;
class Example{
    int a;
    public:
    Example(int);
    void displayA();
    friend void Sum(Example , Test);
};
class Test {
    int b;
    public:
    void displayB();
    Test(int);
    friend void Sum(Example, Test);
};

Example :: Example(int x) {
    a = x;
}
void Example :: displayA() {
    cout << "The value of A : " << a << endl;
}
Test :: Test(int y) {
    b = y;
}
void Test :: displayB() {
    cout << "The value of B : " << b << endl;
}
void Sum(Example E1, Test T1) {
    int S = E1.a + T1.b;
    cout << "The sum of A and B : " << S << endl;
}

int main() {
    Example E(10);
    Test T(20);
    E.displayA();
    T.displayB();
    Sum(E, T);
}