#include <bits/stdc++.h>
using namespace std;
void countsort(int arr[],int len){
  if(len<=0) return;
  int k=arr[0];
  for(int i=0;i<len;i++){
    if(k<arr[i]){
      k=arr[i];
    }
  }
  vector<int> count(k+1,0);
    for(int i=0;i<len;i++){
      count[arr[i]]++;
    }
    for(int i=1;i<=k;i++){
      count[i]+=count[i-1];
    }
  
  vector<int> output(len);
  for(int i=len-1;i>=0;i--){
    output[--count[arr[i]]]=arr[i];
  }
  for(int i=0;i<len;i++){
    arr[i]=output[i];
  }
  
}

int main() {
	// your code goes here
	int arr[]={4,2,6,2,7,4,8,3,5,8,6,9};
// 	int length= sizeof (arr);
	countsort(arr,12);
	for(int i=0;i<12;i++){
	  cout<<arr[i]<<"  ";
	}
return 0;
}
