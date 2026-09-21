//Swaping of variable using default constructure(not contain any parameter)
#include <iostream>
using namespace std;

class Example {
    int a, b;
    public : 
    Example();
    void swaping();
    void display();
};

Example :: Example() {
    a = 10;
    b = 20;
}

void Example :: swaping() {
    int temp = a;
    a = b;
    b = temp;
    cout << "After swaping " << " a : " << a << " b : " << b << endl;
}
void Example :: display() {
    cout << "Before swaping " << " a : " << a << " b : " << b << endl;   
}
int main() {
    Example E1;
    E1.display();
    E1.swaping();
}