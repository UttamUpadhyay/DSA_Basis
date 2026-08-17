#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a; // ptr is a pointer variable that holds the address of a
    cout << "Value of a: " << a << endl; // Output: 10
    cout << "Address of a: " << &a << endl; // Output: address of a
    cout << *(&a) << endl; //Output : value point by the ptr

    cout << "Value pointed to by ptr: " << *ptr << endl; // Output: 10
    return 0;
}