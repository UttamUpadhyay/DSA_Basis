#include <bits/stdc++.h>
using namespace std;

int binarysrch(int arr[],int target,int length){
    int start,end,mid;
    start=0;
    mid=0;
    end=length-1;
    while(start<=end){
        mid=(start+end)/2;
       if(arr[mid]==target){
           return mid;
       } 
       else if (arr[mid]<target){
           start=mid+1;
       }
       else if(arr[mid]>target){
          end=mid-1;
       }
    }
    return -1;
}

int main() {
    int arr[]={2,5,9,12,17,21,23,24,27};
    int length=size(arr);
    int index=binarysrch(arr,12,length);
    
    if(index==-1){
        cout<<"elements not found";
    }
    else{
        cout<<"elements found at index "<<index;
    }
  
    return 0;
}


