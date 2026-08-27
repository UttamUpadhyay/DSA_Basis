#include <iostream>
#include<cstdarg>
using namespace std;

void display(int size, ...) // ... -> ellicepses : show that function required the varaiable parameters
{
int n;
 va_list uttam;
 va_start(uttam, size);
 for (int i = 0; i < size; i++)
 {
    n = va_arg(uttam, int);
    cout << n << endl;
 }
 va_end(uttam);
}

int main()
{
    display(5, 45, 23, 32, 3,65);    // value put acc to size if no of val less then it give garbage value
}