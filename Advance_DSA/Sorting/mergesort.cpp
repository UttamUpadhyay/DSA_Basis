#include <iostream>
using namespace std;
#include <vector> 
vector<int>C;  

void Merge(vector<int> &A, int low, int Mid, int high) {
     int i = low;
    int j = Mid + 1; 
    int k = low;
    while (i <= Mid && j<= high) {
        if (A[i] < A[j]) {
            C[k] = A[i];
            i++; 
            k++;    
        }
        else {
            C[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= Mid) {
        C[k] = A[i];
        i++;
        k++;
    }
    while (j<= high) {
        C[k] = A[j];
        j++;
        k++;
    }
    for (int z = low; z < high; z++) {
        A[z] = C[z];
    }
}
void MergeSort(vector<int> &A, int low, int high) {
   if (low< high) {
    int mid = (low + high) / 2;
    MergeSort(A , low, mid);
    MergeSort(A, mid + 1, high);
    Merge(A, low, mid, high);
   }
}

int main() {
    int n;
    cin >> n;
    C.resize(n);
    vector<int>A(n);
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    MergeSort(A, 0, n);
    cout << "Sorted Array is : " ;
    for (int i = 0; i < n; i++){
        cout  << A[i] << "  " ;
    }


}