#include <iostream>
#include <vector>
using namespace std;

vector<int> C;

void AminusB(vector<int> &A, vector<int> &B, int m, int n) {
    

    int i = 0;
    int j = 0;

    while (i < m && j < n) {

        if (A[i] < B[j]) {
            C.push_back(A[i]);
            i++;
        }
        else if (B[j] < A[i]) {
            j++;
        }
        else {
          
            i++;
            j++;
        }
    }

    while (i < m) {
        C.push_back(A[i]);
        i++;
    }


    for (i = 0; i < C.size(); i++) {
        cout << C[i] << " ";
    }
}

int main() {
    vector<int> A = {11,12, 14, 22, 34, 55, 64};
    vector<int> B = {10, 11,12, 33, 54, 65};
    cout << "A - B : ";
    AminusB(A, B, A.size(), B.size());

}