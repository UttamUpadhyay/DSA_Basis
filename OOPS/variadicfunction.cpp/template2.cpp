#include <iostream>
using namespace std;


// template <class T1, class T2>     //template syntax :  template<class class_name>
// void display(T1 a, T2 b) {
//     cout << a << " " << b << endl;
// }

//  int main() {
//     display(10, 3.5);
//     display(3.4, "C++");
//     display("uttam", 10);
// }

template <class T>     //template syntax :  template<class class_name>
T display(T a, T b) {
    T s = a + b;
    return s;
}

 int main() {
    cout << display(10, 20)  << endl;
    cout << display(3.4, 4.3);
//    cout <<  display("Hello" , "C++");
}
