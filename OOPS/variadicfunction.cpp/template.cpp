//Problem : Same function name but differnet parameters like :

#include <iostream>
using namespace std;

// void display(int x) {
//     cout << x << " ";
// }
// void display(double x) {
//     cout <<  x << " ";
// }
// void display(sting name){
//     cout << name <<" ";
// }

// int main() {
//     display(10);
//     display(3.4);
//     display("uttam");
// }

// solution : by template

// template <class W>     //template syntax :  template<class class_name>
// void display(W var) {
//     cout << var << endl;
// }

//  int main() {
//     display(10);
//     display(3.4);
//     display("uttam");
// }

// template <class s1>
// void sum(s1 var1, s1 var2){
//     cout << var1 + var2 << endl;
// }
//   int main() {
//     sum(10, 20);
//     sum(1.3, 3.5);
//     sum('a', 'b');
//     // sum("hello", "world");     does not perform operation in string, we use to another template for this

// }

