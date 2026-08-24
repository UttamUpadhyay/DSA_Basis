
#include <iostream>
using namespace std;

// void display(int x = 20){   //default arguments
//     cout << x << endl;
// }
// int main() {
//     display();
//     display(10);
// }
void greet(string name = "Guest" , int age = 18 ){    // last default arguments is compulsory if default arguemnts applied in first case
    cout << "Hello \t " << name << "\t : age\t" << age << endl;
}
int main() 
{
    greet();
    // greet("Rohan ");
    // greet("Rahul", 20);
    return 0;
}
