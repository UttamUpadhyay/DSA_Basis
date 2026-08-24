// Variable Length Arguments
// Library name -: #include<cstdarg>
#include <iostream>
#include<cstdarg>
#define square(n) n * n
// #define n 10   // macro function : n ->  macro template , 10 -> macro defination and expression 
using namespace std;

int main() 
{
    int r = 125 /(square(5));   //square(5) -> replace with 5 * 5
    cout << r;
}