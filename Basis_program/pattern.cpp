#include <iostream>
using namespace std;

int main() {

// Question 1:- print pattern :
// * * * * *
// * * * * * 
// * * * * *
// * * * * *


//Answer :- 


//     for (int i = 1; i <= 3; i++) { // Represent Row 
//         cout << endl;
//         for (int j = 1; j <= 5; j++) { // Represent  Column
//             cout << "* " ;
//             }
//     }


// ----------------------------------------------------------------------

// Question 2 :- Print pattern :
//       *
//      * * 
//     * * *
//    * * * *
//   * * * * * 

// Answer :- 
for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j < 5; j++){
        cout << " ";
    }
    for (int k = 0; k <= i; k++){
        cout << " * ";
    }
    cout << endl;
    
}






}