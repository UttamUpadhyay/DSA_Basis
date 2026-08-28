#include <iostream>
using namespace std;



template <typename T, typename... args>
void display(T first, args... rest) {
    cout << first << endl;
    display(rest...);
}
int main() {
    display(10, 20.4, "hello" , 'A' , true);
    return 0;
}