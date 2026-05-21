#include <iostream>
#include<set>
using namespace std;

int main(){
  set<int>A;
  set<int>B;
  set<int>C;
  //To insert the element in the set by the user
  int size;
  int elem;
  
  cin>>size;
  cout<<"The size of the set-: "<<size<<endl;
  for (int i=0;i<size;i++){
    cin>>elem;
    A.insert(elem);
  }
  
  for(int v: A){
    cout<<v<<" ";
  }
}