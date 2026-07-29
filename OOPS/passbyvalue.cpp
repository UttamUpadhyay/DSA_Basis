#include<iostream>
using namespace std;

int Sum(int x, int y);
int Sum(int x, int y) {
    int S;
    S = x + y;
    return (S);
}
int main () {
    int a, b, r;
    cout << "Enter the value -: ";
    cin >> a >> b;
    r = Sum(a, b);
    cout << r;
    return 0;
}