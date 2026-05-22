#include <iostream>
using namespace std;

void  linsrc(int arr[],int find , int size){
    int temp=0;
    for(int i=0;i<size;i++){
        if(arr[i]==find){
          cout<<"Elements found at index "<<i;
           temp=1;
            
        }
    } if(temp==0){
        cout<<"elemnts not found";
    } 

}
  

int main(){
    int size;
    cout<<"Enter the size of the array :- ";
    cin>>size;
   
    int arr[size];
    cout<<"enter the element of arr :- ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int find;
    cout<<"Enter elemenent for linear search:- ";
    cin>>find;
   linsrc(arr,find,size);
}