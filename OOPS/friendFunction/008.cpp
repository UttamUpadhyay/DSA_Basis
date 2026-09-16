// BY Friend function we can access private members of class. In this example, we have created a friend function SUM() which is friend of class Example.
#include <iostream>
using namespace std; 


class Example {
    int a;
    public:
    void geta(int);
    friend Example SUM (Example, Example);
    void display(Example);
};
 void Example :: geta(int x) {
    a = x;
}
Example SUM(Example A1, Example A2) {
    Example S;
     S.a = A1.a + A2.a;
     return S;
}
void Example :: display(Example S){
    cout << "Sum : " <<  S.a << endl;
}

int main() {
    Example A, B, C;
    A.geta(10);
    B.geta(20);
    C = SUM(A, B);
    C.display(C);
}