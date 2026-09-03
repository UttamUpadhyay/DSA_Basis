#include <iostream>

#include <vector>

using namespace std;

void DecToBin(int Decimal) {

    if (Decimal > 0) {
     DecToBin(Decimal / 2);
    cout << Decimal % 2;
    }
}

int main() {
   
     DecToBin(12);
}