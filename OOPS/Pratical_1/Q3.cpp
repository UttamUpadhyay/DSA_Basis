#include <iostream>
#include<cstdarg>
using namespace std;

class Example {
    public:
    void display(int, ...);
};

void Example :: display(int size, ...){
    int n;
    int sum = 0;
    va_list l1;
    va_start(l1,size);
    for (int i = 0; i < size; i++) {
        n = va_arg(l1,int);
        sum += n;
    }
    cout << sum << endl;
    va_end(l1);
}

int main() {
    Example E1;
    E1.display(5,10,20,30,40,50);
}