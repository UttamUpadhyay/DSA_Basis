#include <iostream>
using namespace std; 

class test; 

class Example {
    int a;
    public:
    void getdata(int);
    friend int sum(Example, test);
};
class test {
    int b;
    public:
    void getdata(int);
    friend int sum(Example, test);
};
void Example :: getdata(int x) {
    a = x;
}
void test :: getdata(int y) {
    b = y;
}
int sum(Example E1, test t1){
    int r = E1.a + t1. b;
    return r;
}

int main() {
    Example E;
    test t;
    E.getdata(10);
    t.getdata(20);
    cout << "The sum of the both var in different class : " << sum(E, t);
}