#include <bits/stdc++.h>
#include <set>
using namespace std;

int main() {
	set<int>S1;
	S1.insert(10);
	S1.insert(20);
	S1.insert(30);
	S1.insert(40);
	S1.insert(50);
	S1.insert(60);
	cout<<"Set before deletion:- "<<endl;
for(int i:S1){
  cout<<i<<" ";
}
S1.erase(60);
cout<<endl<<"Set after deletion of element 60:- "<<endl;
for(int i:S1){
  cout<<i<<" ";
}
auto i=S1.find(40);
if(i!=S1.end()){
  cout<<endl<<"Found element "<<*i<<endl;
}
 return 0;
}
