#include <iostream>
using namespace std;

class Example{
    static int a;
    public:
    // static int a;
};

int Example ::a = 10;
int main() {
    cout << Example :: a;
    Example E1;
    cout << "  " << E1.a;
}
