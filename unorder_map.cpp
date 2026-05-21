#include <bits/stdc++.h>
using namespace std;
#include<unordered_map>
int main() {
	// Unordered list using map
unordered_map<int,string>unorder;
unorder[3]="am ";
unorder[2]="I ";
unorder[4]="Uttam ";
unorder[1]="hello, ";
//Unorder using iteration
for(auto i=unorder.begin();i!=unorder.end();i++){
  cout<<i->first<<" : "<<i->second<<endl;
}
cout<<endl;

//Unorder lmap using for each loop
for(auto v:unorder){
  cout<<v.first<<" : "<<v.second<<endl;
}

return 0;
   
   
 
}
