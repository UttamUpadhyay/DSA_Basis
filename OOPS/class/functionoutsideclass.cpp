// Access function globally

#include <iostream>
using namespace std;
// . -> member access operator;

class Example{
  private:  
    int x, y, n;
public:
void getin();
int getvalue();
};


void Example::getin() {
   cout << "Enter the value -: ";
  cin >> x;
  cin >> y;
}
int Example :: getvalue() {
 cout << "The values are -: ";
    cout << x << " " << y;
}

int main() {
    Example E;
    E.getin();
    E.getvalue();
}