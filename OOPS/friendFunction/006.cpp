
#include <iostream>
using namespace std; 

class B;
class A{
    int a;
    public:
    void geta(int);
    void showa();
    friend class B;
    void displayB(B);
};

class B{
    int b;
    public:
    void getb(int);
    void showb();
    void displayA(A);
    friend class A;
};

void A :: geta(int x){
    a = x;
}
void A :: showa(){
    cout << "The value of a : " << a << endl;
}
void B:: getb (int y) {
    b = y;
}
void B :: showb() {
    cout << "The value of b : " << b << endl;
}
void A :: displayB(B B1) {         //Priority high of memeber function that's why show it declare by the meber function
    cout << "The value of b using friend function : " << B1.b << endl;
}
void B :: displayA(A A1) {
    cout << "The value of a using friend function : " << A1.a << endl;
}

int main() {
    A obj1;
    B obj2;
    obj1.geta(10);
    obj2.getb(20);
    obj1.showa();
    obj2.showb();
    obj1.displayB(obj2);    //friend function of the class B and member function for class A ::::::  member fun > friend (priority)
    obj2.displayA(obj1);
}