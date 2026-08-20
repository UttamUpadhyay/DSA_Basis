#include <iostream>
using namespace std;

class Example
{
    int a;
    public:
    void get(int);
    int sum(Example, Example); // int a =10
};
void Example :: get(int a1)
{
    a = a1;
}
int Example :: sum(Example A, Example B)
{
    int S = A.a + B.a;
    return S;
}

int main() {
    Example E1, E2, E3;
    E1.get(10);
    E2.get(20);
    int r = E3.sum(E1, E2);
    cout << r;

}
