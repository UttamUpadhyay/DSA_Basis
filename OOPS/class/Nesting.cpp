#include <iostream>
using namespace std;

class Example
{
    int a, b;
    int add();
    public:
    void getdata(int , int);
};

void Example:: getdata(int x, int y) 
{
    a = x;
    b = y;
    int res = add();
    cout << "The sum is: " << res;
}
int Example::add() 
{
    int r = a + b;
    return r;
}

int main() {
    int n1, n2;
    cout << "Enter the numbers -: ";
    cin >> n1 >> n2;
    Example E;
    E.getdata(n1, n2);
    // E.add() // We cann't access due to this method in private section ~~~solution ---- nesting

}