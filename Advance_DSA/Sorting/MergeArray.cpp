#include <iostream>
#include <vector>
using namespace std;

vector<int> C;

void MergeArray(vector<int> &A, vector<int> &B, int m, int n) {
    int i = 0;
    int j = 0;

    while (i < m && j < n) {

        if (A[i] < B[j]) {
            C.push_back(A[i]);
            i++;
        }
        else {
            C.push_back(B[j]);
            j++;
        }
    }
    while (i < m) {
        C.push_back(A[i]);
        i++;
    }
    while (j < n) {
        C.push_back(B[j]);
        j++;
    }
    for (i = 0; i < C.size(); i++) {
        cout<<C[i]<<" ";
    }
  
}

int main() {

    vector<int> A = {11, 23, 32, 65};
    vector<int> B = {2, 3, 5, 33, 75};

    MergeArray(A, B, A.size(), B.size());

    return 0;
}