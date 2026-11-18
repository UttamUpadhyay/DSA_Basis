#include <iostream>
using namespace std;

class Test;
class Example {
    private:
    int a, b;
    string n, add;
    public :
    void get(int , int);
    void sum(Example , Example);
    // friend void display();
    int square();
    void greet(string, string);
};

// syntax : retrun_type class_name :: funtion_name
void Example :: get(int x, int y){
    a = x;
    b = y;
}
void Example::greet(string name, string address = "pratapgarh") {
    n = name;
    add = address;
    cout << n << endl << add;
}

inline int Example :: square (){
    return a * b;
}
void Example :: sum(Example E1, Example E2){
    Example E3;
    E3.a = E1.a + E2.a;
    E3.b = E1.b + E2.b;
    cout << "The value of a : " << E3.a << endl;
    cout << "The value of b : " << E3.b << endl;
}

int main() {
    Example E1, E2;
    E1.get(10, 20);
    E2.get(40, 50);
    Example E3;
    E3.sum(E1, E2);
    cout << E1.square();
    E1.greet("uttam");
    E1.greet("rahul", "raja");
}
