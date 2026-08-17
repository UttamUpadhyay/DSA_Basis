#include <iostream>
using namespace std;
// . -> member access operator;

class Example{
  private:  
    int x, y, n;
public:
void getin() {
    cout << "Enter the value -: ";
  cin >> x;
  cin >> y;
}
int getvalue() {
    cout << "\n The values are -: ";
    cout << x << " " << y;
}

};

int main() {
    Example E;
    E.n = 10; // 
    E.getin();
    E.getvalue();
}
