#include <iostream>
using namespace std;        

class Example {
    int a, b;
    public:
    void getdata(int, int);
    friend void average(Example);
};
void Example:: getdata(int x, int y) {
    a = x;
    b = y;
}
void average(Example obj) {
    float avg = (obj.a + obj.b) / 2.0;
    cout << "Average: " << avg << endl;
}

int main() {
    Example obj;
    obj.getdata(10, 20);
    average(obj);
    return 0;
}