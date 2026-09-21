#include <iostream>
#include <vector>
using namespace std;

vector<int> C;

void MergeArray(vector<int> &A, vector<int> &B, int m, int n) {
    C.clear();

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
        cout << C[i] << " ";
    }
}

void Union(vector<int> &A, vector<int> &B, int m, int n) {
    C.clear();

    int i = 0;
    int j = 0;

    while (i < m && j < n) {

        if (A[i] < B[j]) {
            C.push_back(A[i]);
            i++;
        }
        else if (B[j] < A[i]) {
            C.push_back(B[j]);
            j++;
        }
        else {
            C.push_back(A[i]);
            i++;
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
        cout << C[i] << " ";
    }
}

int main() {

    vector<int> A = {11, 22, 34, 55, 64};
    vector<int> B = {10, 11, 33, 54, 65};

    cout << "Merge: ";
    MergeArray(A, B, A.size(), B.size());

    cout << endl;

    cout << "Union: ";
    Union(A, B, A.size(), B.size());

    return 0;
}