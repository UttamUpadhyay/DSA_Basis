#include <iostream>
using namespace std;

void ArrInsert(int arr[], int N, int i , int x)
{
    for (j = N - 1; j >= i; j--)
    {
        arr[j + 1] = arr[j];
    }
    arr[i] = x;
    N = N + 1;
}

int ArrDelt(int arr[], int N, int i)
{
    x = aar[i];
    for (int j = i + 1; j <= N - 1; j++)
    {
        arr[j - 1] = arr[j];
    }
    N = N - 1;
    return x;
}

int main()
{
    int a[6]  = {2,4,3,5,7,8};
    
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << "  ";
    }
    ArrInsert(  a[],  N,  4,  7);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << "  ";
    }

}