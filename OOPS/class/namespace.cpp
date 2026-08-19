// #include <iostream>
// using namespace std;


// // namespace first {
// //     int s = 10;
// // }
// //  using namespace first;
// namespace start 
// {
//     void display() 
//     {
//         cout << "Display the function using namespace";
//     }
// }

// int main()
//     {
// //  string s = "uttam";
//  start::display();

//     }

// ---------------------------------------------------------------
// #include <iostream>
// using namespace std;

// namespace var1 {
//     int a = 10, b = 10;;
//     void sum() {
//         cout << a + b << endl;
//     }
// }
// namespace var2 {
//     double a = 20.43, b = 20.65;
//      void sum() {
//         cout << a + b << endl;
//     }
// }
// void sum();

// int main() {
//     string a = "uttam", b = "upadhyay";
//     cout << var1::a <<" "<< var1::b << endl;
//     var1::sum();
//     cout << var2::a <<" " << var2::b << endl;
//     var2::sum();
//     cout << a <<" " << b << endl;
//     sum();
// }
// void sum() 
// {
// cout << "uttamupadhyay";
// }

// --------------------Rename the namespace--------------------------------

#include <iostream>
using namespace std;
 namespace verylongnamespace {
    int a = 10;
 }
 namespace vlm = verylongnamespace;

 int main() 
 {
    cout << vlm::a;
 }


