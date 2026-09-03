#include <iostream>
using namespace std;


class Example{
    static int count;
    int a;
    public:
    void getdata(int);
    void display();
};

int Example :: count;
void Example :: getdata(int x){
    a = x;
    count++;
}
void Example :: display() {
    cout << a << endl;
    cout << count << endl;
}
int main() {
    Example E1, E2;
    E1.getdata(10);
    E1.display();
    E2.getdata(20);
    E2.display();
    //output 
    // 10
    //  1
    // 20
    // 2
//this show that class variable is shared among the objects

//DOn't call static class function with object(we can call but not reconsider itt)....only call by the class
}