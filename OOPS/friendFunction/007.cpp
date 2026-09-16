#include <iostream>
using namespace std; 

//Return the sum of the two objects data member

class Example {
    int a;
    public:
    void geta(int);
    int SUM(Example, Example);
};

int Example :: SUM(Example A1, Example A2) {
    int sum = A1.a + A2.a;
        return sum;
}
void Example :: geta(int x) {
    a = x;
}

int main() {
   Example A;
   Example B;
   Example S;
   A.geta(10);
   B.geta(20);
    int sum = S.SUM(A, B);
    cout << "Sum of A and B is: " << sum;   
}

