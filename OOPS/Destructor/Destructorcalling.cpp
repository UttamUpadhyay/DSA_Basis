#include <iostream>
using namespace std; 

class Example {
public:
    Example(){
        cout << "Constructor called" << endl;
    }
    ~Example();
   
};
Example :: ~Example() {
    cout << "Destructor called" << endl;
}

//First all the constructor call by the compiler than all destructor call takes place.
int main() {
    Example E1;
    Example E2;
    Example E3;
    return 0;
}