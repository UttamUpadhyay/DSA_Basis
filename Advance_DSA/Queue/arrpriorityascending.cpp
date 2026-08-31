// Question 4 : Program for Array Implementation of Priority Queue (Ascending order Array)

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

void Enqueue(int PQ[], int N,int x) {
    int i = 0;
    while (i < N && x >= PQ[i]){
        i = i + 1;
    }
    ArrInsert(PQ, N, i, x);
}
int ArrDelt(int arr[], int N, int i)
{
   int  x = arr[i];
    for (int j = i + 1; j <= N - 1; j++)
    {
        arr[j - 1] = arr[j];
    }
    N = N - 1;
    return 0;
}
// int Dequeue(int PQ[], int N) {
//   int  x = PQ[0];
//     ArrDelt(PQ, N, 0);
  
//     return x;
// }


// Question 5 : Program for Array Implementation of Priority Queue (Descending Array)
int Dequeue(int PQ[], int N) {
    int x = PQ[N - 1];
    ArrDelt(PQ,  N, N - 1);
    return x;

}
int main() {
    int N = 7;
    int a[N] = {1, 3, 2, 5, 9, 4, 7};
    cout << "Intital Array : ";
    for (int i = 0; i < N; i++) 
    {
        cout << a[i] << " ";
    }
    cout << "\nAfter insertion :";
    Enqueue(a, N, 6);
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    int x = Dequeue(a, N);
    cout << "\nAfter Deletion : ";
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << "And deleted element : " << x ;
}