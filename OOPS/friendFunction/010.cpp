#include <iostream>
using namespace std; 


class Example {
    int a;
    public:
    void geta(int);
     Example SUM (Example, Example);
    void display(Example);
};
 void Example :: geta(int x) {
    a = x;
}
Example Example :: SUM(Example A1, Example A2) {
    Example S;
     S.a = A1.a + A2.a;
     return S;
}
void Example :: display(Example S){
    cout << "Sum : " <<  S.a << endl;
}

int main() {
    Example A, B, C, R;
    A.geta(10);
    B.geta(20);
    C = R.SUM(A, B);
    C.display(C);
}