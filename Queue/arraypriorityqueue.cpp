
#include <iostream>
using namespace std;

void ArrInsert(int arr[], int N, int i , int x)
{
    for (int j = N - 1; j >= i; j--)
    {
        arr[j + 1] = arr[j];
    }
    arr[i] = x;
    N = N + 1;
}

int ArrDelt(int arr[], int N, int i)
{
   int  x = arr[i];
    for (int j = i + 1; j <= N - 1; j++)
    {
        arr[j - 1] = arr[j];
    }
    N = N - 1;
    return x;
}

int main()
{
    int N = 10;
   int a[N]  = {2,4,3,5,7,8};
    cout << "Initial Array : ";
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << "  ";
    }
    ArrInsert(  a, N,  4,  7);
    cout << "\nAfter insert the element 7 at index 4 : ";
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << "  ";
    }
    cout << "\nAfter deleted the element  at index 2 : ";
    ArrDelt(a,  N, 2);
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << "  ";
    }


}