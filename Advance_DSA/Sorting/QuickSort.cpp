#include<bits/std.c++>
#include<vector>
#include<algorithm>
using namespace std;

int partition(vector<int>& A, int low, int high){
    int i = low;
    int j = high + 1;
    int pivot = A[low];

    do{
        do{
            i++;
        }while(A[i] < pivot);

        do{
            j--;
        }while(A[j] > pivot);

        if(i < j){
            swap(A[i], A[j]);
        }

    }while(i < j);

    swap(A[low], A[j]);

    return j;
}

void QuickSort(vector<int>& A, int low, int high){
    if(low < high){
        int j = partition(A, low, high);

        QuickSort(A, low, j-1);
        QuickSort(A, j+1, high);
    }
}

int main(){
    vector<int> v = {12,32,15,-21,72,33,56,-87};

    v.push_back(INT_MAX);

    QuickSort(v, 0, 7);

    v.pop_back();

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}