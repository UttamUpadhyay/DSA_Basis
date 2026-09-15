#include<iostream>
using namespace std;

class Example; // Forward declaration
class test {
    int b;
    public:
    
    void getdata(int);
    friend void swap1(Example , test );
};

class Example {
    int a;
    public:
    
    void getdata(int);
    friend void swap1(Example , test );
};
void Example :: getdata(int x) {
    a = x;
}

void test :: getdata(int x) {
    b = x;
}   
void swap1(Example E, test t) {
    cout << "Before swapping : " << E.a << " " << t.b << endl;
    int temp = E.a;
    E.a = t.b;
    t.b = temp;
     cout << "After swapping : " << E.a << " " << t.b << endl;
}

int main() {
    Example E;
    test t;
    E.getdata(10);
    t.getdata(20);
   swap1(E, t);

    return 0;
   
}