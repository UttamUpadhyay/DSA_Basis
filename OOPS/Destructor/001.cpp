#include <iostream>
using namespace std; 

class Example{
    int a,b;
    public : 
    Example (int , int);
    void display();
    ~Example();
};
Example :: Example (int x, int y) {
    a = x;
    b = y;
}
void Example :: display () {
    cout << "The value of a : " << a << " b : " <<  b <<  endl;
}
Example :: ~Example() {
    cout << "Objects Deleted\n";
}

int main() {
    Example E1(100, 200);
    E1.display();
}