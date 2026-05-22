#include <bits/stdc++.h>

using namespace std;
// #include <math.h>
bool isprime(int n)
  {
    if (n <= 1) {
      return false;
    }
    if (n % 2 == 0) {
      return false;
    }
    for (int i = 3; i <= n; i += 2) {
      if (n % i == 0) {
        return false;
      }
      return true;
    }
  }
  

    int main() {
      // your code goes here
      int num;
      cin >> num;
      if (isprime(num)) {
        cout << num << "  is prime" << endl;

      }

      else {
        cout << num << "  is not prime";
      }

      return 0;
    }