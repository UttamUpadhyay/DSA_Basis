//Function overloading using Classes by nesting

#include <iostream>
using namespace std;

class Function{
    int a, b;
    float c;
    int sum();
    float sum(int , int , float);
    public:
    void getdata(int, int, float);
};

void Function :: getdata(int x, int y, float z) 
{
    a = x;
    b = y;
    c = z;
    int res = sum();
    float res2 = sum(x, y, z);
    cout << "The sum of int: " << res;
    cout << "\nThe sum of int and float: " << res2;
}
int Function :: sum()
{
    int res = a + b;
    return res;
}
float Function :: sum(int x, int y, float z) {
    float ans = x + y + z;
    return ans;
}


int main() {
    int a, b;
    float c;
    cout << "Enter 2 int and 1 float: ";
    cin >> a >> b >> c;
    Function F1;
    F1.getdata(a, b, c);

}