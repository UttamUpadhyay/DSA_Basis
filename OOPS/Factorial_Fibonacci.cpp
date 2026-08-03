#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int fact = 1;
	for (int i = 1; i <= n; i++) {
	  fact = fact * i;
	}
	cout <<"Factorial of a number -: " <<  fact << endl;


int a = 0;
int b = 1;
int next = 0;
for (int i = 0; i < n; i++) {
  cout << "Fibonacci series for " << n << " -: " << a << " \n";
  next = a + b;
  a = b;
  b = next;
}

}
