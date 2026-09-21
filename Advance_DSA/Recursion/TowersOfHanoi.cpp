#include <iostream>
using namespace std;

void TOH(int n, char S, char M, char D) {
    if (n == 1) {
        cout << S << " ---> " << D << endl;
    }
    else {
        TOH(n - 1, S , D, M);
        cout << S << " ---> " << D << endl;
        TOH(n - 1, M, S, D);
    }
}

int main() {
    
    TOH(4, 'S', 'M', 'D');
}