#include <bits/stdc++.h>
using namespace std;
#include<map>
int main() {
	// Ordered list using map
 map<int,string>map1={{1,"hello"},{2,"how"},{3,"are"},{4,"you?"}};
 for(auto v:map1){
   cout<<v.first<<" ";
   cout<<v.second<<" "<<endl;}
   
   cout<<endl;
   
   cout<<"The reverse of the map are formed by :- "<<endl;
    map<int,string,greater<int>>map2={{4,"this"},{3,"is"},{2,"the"},{1,"reverse"}};
    for(auto v:map2){
   cout<<v.first<<" ";
   cout<<v.second<<" "<<endl;
   
   
 
}}
