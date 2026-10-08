
#include <iostream>
using namespace std; 

class Rectangle;
class Circle{
    int R;
    public:
    void getR(float);
    void displayCircle();
    friend void compare(Circle, Rectangle);
};

class Rectangle{
    int l;
    int b;
    public:
    void getdim(float, float);
     void displayRectangle();
    friend void compare(Circle, Rectangle);
    
};

void Circle :: getR(float x){
    R = x;
}
void Circle :: displayCircle() {
    cout << "Area of Circle : " << 3.14 * (R ^ 2) << endl;
}
void Rectangle :: getdim(float x, float y){
    l = x;
    b = y;
} 
void Rectangle :: displayRectangle(){
    cout << "Area of Rectangle : " << l * b << endl;
}
void compare(Circle C, Rectangle R) {
 int circle = (C.R ^ 2)* 3.14;
 int rect = R.l * R.b;
 if (circle > rect) {
    cout << "Circle area is high\n";
 }
 else {
    cout << "Rectangle area is high\n";
 }
}

int main() {
    Rectangle R1;
    R1.getdim(10, 20);
    R1.displayRectangle();
    Circle C1;
    C1.getR(10);
    C1.displayCircle();
    compare(C1, R1);
}