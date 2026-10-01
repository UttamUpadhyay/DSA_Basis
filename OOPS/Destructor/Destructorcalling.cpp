#include <iostream>
using namespace std; 

class Example {
public:
    Example(){
        cout << "Constructor called" << endl;
    }
    ~Example(){
        cout << "Destructor called" << endl;
    }
};

int main() {
    Example E1;
    Example E2;
    return 0;
}