#include <iostream>
using namespace std;
int n = 10;
int main() {
    int n = 20;
    cout << n << endl;
    cout << ::n;
}