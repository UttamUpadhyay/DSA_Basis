//IMPORTANT FOR THE EXAM PURPOSE

#include <iostream>
#include <cstdarg>
using namespace std;

void display(int size,...)
{
    int ans;
    va_list list;
    va_start(list, size);
    for (int i = 0; i < size; i++) 
    {
        ans = va_arg(list, int);
        cout << ans << endl;
    }
    va_end(list);
}

int main()
{
    display(5, 12,23,42,1,6);
}