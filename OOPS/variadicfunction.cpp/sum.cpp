#include <iostream>
#include<cstdarg>
using namespace std;

void display(int size, ...) // ... -> ellicepses : shiw that function required the varaiable parameters
{
int n;
int sum = 0;
 va_list uttam;
 va_start(uttam, size);
 for (int i = 0; i < size; i++)
 {
    n = va_arg(uttam, int);
     sum += n;
    
 }
 cout << sum << endl;
 va_end(uttam);
}

int main()
{
    display(5, 1,2,3,4,5);
}