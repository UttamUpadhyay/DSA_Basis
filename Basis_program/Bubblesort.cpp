#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int arr[]={9 , 12, 3, 2, 11, 5, 24, 0};
		cout<<"Initial Array {";
	for(int i=0;i<size(arr);i++){
	  cout<<arr[i]<<" ";
	}
	cout<<"}"<<endl;

	for(int pass=0;pass<size(arr);pass++){
	  for(int comp=0;comp<size(arr)-1;comp++){
	    if (arr[comp]>arr[comp+1]){
	      int temp=arr[comp];
	      arr[comp]=arr[comp+1];
	      arr[comp+1]=temp;
	    }
	  }
	}
	cout<<"Sorted Array {";
	for(int i=0;i<size(arr);i++){
	  cout<<arr[i]<<" ";
	}
	cout<<"}"<<endl;

}
