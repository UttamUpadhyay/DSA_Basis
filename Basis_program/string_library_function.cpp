#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1;
	getline(cin,s1); //getline used for input the whole sentence in a line by user
	cout<<s1;
	string s2 = s1.substr(0, 10); //1st define starting position,last define length
	string s3 = s1.substr(10);
	cout<<endl<<s2;
	cout<<endl<<s3;
	s1.append(" Discipline is Permanent");
	cout<<endl<<s1;
	cout<<endl<<s3.erase(0,4);
	cout<<endl<<s3.find( "r");  //starting from 0 index position
	cout<<endl<<s3.find( "r",6);  //used to search after particular index 
	cout<<endl<<s3.at(2);   //used to find word from a particular index
	cout<<endl<<s1.length();
	cout<<endl<<s1.size();
	cout<<endl<<s1.replace(0,10,"inspiration"); //start from 0 index,second value represents the length that have to replace
// 	reverse(s1.begin(), s1.end());
// 	cout<<endl<<s1;
// rotate(s1.begin(),s1.begin()+1,s1.end);
// 	cout<<endl<<s1;
cout<<compare(s1,s2);
	
	
	
	


  return 0;
}
