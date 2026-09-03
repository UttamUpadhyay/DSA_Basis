#include <iostream>
using namespace std;

int Power1(int a, int n){
    if (n == 0) return 1;
        return a * Power1(a, n - 1);
}

int Power2(int a, int n){
    double x = Power2(a, n / 2);
    
    if (n == 0) {
        return 1;
    }
    else if (n % 2 == 0) {
        return x * x;
    }
    else if (n % 2 != 0) {
        return x * x * a;
    }
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, )
}

int main() {
    cout << "Power 1 : " << Power1(2, 10) << endl;
    cout << "Power 2 : " << Power2(2, 10) <<endl; 
    return 0;
}