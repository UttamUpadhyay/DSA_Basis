//Swaping using parameterized Constructor

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
    cout << "Before Swaping a : ";
    cout << a << " b :  " << b << endl;
    cout << "Addition of number : " << a + b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "After Swaping a : " << a << " b : " << b;
}
int main() {
    Example E1(10, 20);
    E1.display();
}