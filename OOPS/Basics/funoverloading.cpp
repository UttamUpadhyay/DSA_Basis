#include <iostream>
using namespace std;

void sum();
int sum(int, int);
float sum(int, int, float);

int main() {
    int a, b, r1;
    float r2, c;
    cout << "Enter the Number for the main function -: ";
    cin >> a >> b >> c;
    sum(); // first function calling
    r1 = sum(a, b);  //calling 2nd function
    r2 = sum(a, b, c); // calling 3rd function
    cout << "The sum using 2nd function is -:  " << r1 << endl;
    cout << "The sum using 3rd function is  -: " << r2 << endl;

}
void sum() {
    int x, y;
    cout << "Enter the value for the 1st function -: " << endl;
    cin >> x >> y;
    int s = x + y;
    cout << "The sum using 1st function is -: " << s << endl;
}
int sum(int x, int y) {
    int s = x + y;
    return s;
}
float sum(int a, int b, float c) {
    float s = a + b + c;
    return s;
}