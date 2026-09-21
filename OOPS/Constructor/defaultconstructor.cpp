//Addition of number using Default Constructor(not contain any parameter)


#include <iostream>
using namespace std;

class Example {
    int a, b;
    public : 
    Example();
    void display();
};
Example :: Example() {
    a = 10;
    b = 20;

}

void Example :: display() {
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "The sum of a and b is : " << a + b << endl;
}

int main() {
    Example E1;
    E1.display();
}