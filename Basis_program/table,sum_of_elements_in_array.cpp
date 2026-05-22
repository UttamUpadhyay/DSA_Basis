#include <bits/stdc++.h>
using namespace std;

int main() {
// 	TABLE OF ANY NUMBER ENTER BY THE USER :-
		int num;
  	cin>>num;
  	int y=1;
  	while(y<=10){
	    
	    
  	    cout<<num*y<<endl;
  	    y++;
  	}
  	return 0;

}


// SUM OF THE ELEMENTS IN THE 1D ARRAY :-
int main() {
  cout<<"SUM OF THE ELEMENTS IN THE 1D ARRAY :-";
    int arr[5]={10,20,30,40,50};
    int sum=0;
    for (int i=0;i<5;i++)
    {
        cout<<endl<<arr[i]<<" ";
        
        
    }
    for (int i=0;i<5;i++){
        
        sum+=arr[i];
       
    } cout<<endl<<sum;
        
    return 0;
}

// SUM OF THE ELEMENTS IN THE 2D ARRAY :-
int main()
{
  int arr[3][4]={{10,20,30,40},
  {85,50,60,45},
  {15,5,25,15}};
  int sum=0;
  for(int i =0;i<3;i++)
  {
    for (int j=0;j<4;j++)
    {
      cout<<arr[i][j]<<" ";
      sum+=arr[i][j];
      
    }cout<<endl;
  }cout<<endl<<sum;
  return 0;
  
  
}

