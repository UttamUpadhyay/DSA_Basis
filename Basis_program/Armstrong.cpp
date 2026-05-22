#include <bits/stdc++.h>

using namespace std;
// #include <math.h>

int main() {
  // your code goes here
  int count = 0;
  int remd;
  int sum = 0;
  int num;
  int on;
  cin >> num;
  on = num;
  while (on != 0) {
    on /= 10;
    ++count;
  }
  on = num;
  while (on != 0) {
    remd = on % 10;
    sum += pow(remd, count);
    on /= 10;
  }
  if (sum == num) {
    cout << num << " is a armstrong" << endl;

  }
  else {
    cout << num << "  is  not a armstrong" << endl;
  }
  return 0;
}