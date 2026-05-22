#include <bits/stdc++.h>
using namespace std;
// 	SWAPING A VALUE USING CALL OF VALUE

// 	void swap(int t,int u){
// 	  t=t+u;
// 	  u=t-u;
// 	  t=t-u;
// 	  cout<<"after swaping  "<<t<<"  "<<u<<endl;
// 	  }

// 	int main() {
// 	  int x,y;
// 	  cin>>x>>y;
// 	  cout<<"before swaping "<<x<<"  "<<y<<endl;
// 	  swap(x,y);
// }
// // PRINT 5 TIMES HELLO WITHOUT USING LOOP(RECURSION)
// void printhello(int n){
//   if(n==0){
//     return;}
//     cout<<"  "<<"hello";
//     printhello(n-1);
//   }

// int main(){
//   int x=5;
//   printhello(x);
//   return 0;
// }


//FIND FACTORIAL OF A NUMBER USING RECURSION

int factorial(int n){
  if (n<=0){
    return n;
  }
  else{
    return n*factorial(n-1);
  }
}
int main(){
  int t;
  cin>>t;
  if(t<0){
    cout<<"not possible";
  }
  else{
    cout<<factorial(t);
  }return 0;
  
}

