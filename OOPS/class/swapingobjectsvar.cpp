#include <iostream>
using namespace std;

class Example 
{
    int a;
    public:
    void get(int);
    void swap(Example, Example);

};
void Example :: get(int x)
{
    a = x;
}
void Example :: swap(Example A, Example B)
{
    int temp = A.a;
    A.a = B.a;
    B.a = temp;
    cout << "After swaping -: " << A.a << " " << B.a;
}

int main() {
    Example E1, E2;
    E1.get(10);
    E2.get(20);
    
    E1.swap(E1, E2);
    


}