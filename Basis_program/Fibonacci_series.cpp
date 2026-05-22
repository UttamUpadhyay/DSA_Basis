#include <bits/stdc++.h>
using namespace std;
void fibonacci( int terms){
  std::cin >> terms;
  int first=0,second=1,next;
  cout<<first<<" "<<second<<"  ";
  int term=2;
  while (term<terms){
    next=first+second;
    first=second;
    second=next;
    term++;
    cout<<next<<"   ";
  }
}

int main() {
	// your code goes here
	int series;
	cin>>series;
	cout<<"Fibonacci series: ";
  fibonacci(series);
	return 0;

}
