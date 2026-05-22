#include <bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int length){
  for(int i=0;i<length-1;i++){
    for(int j=i+1;j!=0;j--){
      if(arr[j]<arr[j-1]){
        int temp=arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
      }else {
      break;
    }
    }
  }
}

int main() {
	// your code goes here
	int arr[]={7,8,1,2,7,5,6};
	int length=size(arr);
  insertionsort(arr,length);
  for(int i=0;i<length;i++){
    cout<<arr[i]<<" ";
  }

}
