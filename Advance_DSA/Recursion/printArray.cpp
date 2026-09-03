#include <iostream>
#include <vector>
using namespace std;

// int printArray(vector<int> arr, int i) {
//     int n = arr.size();
//     if (i < n) {
//     cout << arr[i] << ", ";
//     printArray(arr, i + 1);
//     }
// }

//to print the reverse element in Array
int printArray(vector<int> arr, int i) {
    int n = arr.size();
    if (i < n) {
        printArray(arr, i + 1);
    cout << arr[i] << ", ";
    
    }
}

int main() {
    vector<int>array;
    array.push_back(1);
    array.push_back(2);
    array.push_back(3);
    array.push_back(4);
    array.push_back(15);
    int len = array.size();
    cout << printArray(array, 0);    
}