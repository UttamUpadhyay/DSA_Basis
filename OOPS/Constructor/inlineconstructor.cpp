//Copy one object to another object using copy constructor

#include <iostream>
using namespace std; 
//Constructor define under the class known as inline constructor   

class Example {
    int a, b;
    public : 
    Example(int x, int y) {
    a = x;
    b = y;
}
    void display();
};

void Example :: display() {
    cout << "a : ";
    cout << a << " b :  " << b << endl;
    
}
int main() {
    Example E1(10, 20);
    E1.display();
    Example E2 = E1; //Copying object E1 to E2 using copy constructor
    E2.display();
    Example E3(E1); //Copying object E1 to E3 using copy constructor
    E3.display();
    Example E4(E1); //Copying object E1 to E4 using copy constructor
    E4.display();
    
}