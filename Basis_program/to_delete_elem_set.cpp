#include <iostream>
#include <set>
using namespace std;

int main() {
	// your code goes here
	set<int>S1={4,5,2,5,8,1,2,3};
	//insert the element in the set
	S1.insert(9);
	S1.insert(7);
	S1.insert(6);
	//for delete the element in the set 
	S1.erase(2);  
	//Traversing the set
	for(int x:S1 ){
	  cout<<x<<" ";
	}
	cout<<endl;
	cout<<S1.size();
	
return 0;
}
