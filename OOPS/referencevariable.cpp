#include<iostream>
using namespace std;
int main() 
{
    int a = 10;
    int &b = a; // b is a reference variable to a
    a = a + 10;
    cout << "Value of a: " << a << endl; // Output: 20
    cout << "Value of b: " << b << endl; // Output: 20
    return 0;
}