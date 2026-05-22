#include<iostream>

using namespace std;
#include <cstring>
#include <string>




int main() {
  char s[100];
  cin.getline(s, 100); //store string in the entire line 
  cout << s << endl;
  cout << strlen(s) << endl; //use to get the length of the string
  cout<<strcpy(s,"hello uttam")<<endl;   //copies the second arguments in the first arguments
  // cout<<s<<endl;
  // char s2[100]="hi world";
  //   cout<<s2<<endl;
  // strcpy(s2,s);
  
  // cout <<s<<endl<<s2;
  cout<<strcat(s," this side uttam")<<endl; // join the both arguments
  cout<<strcmp(s,"hello uttam")<<endl; //compare both strings,if matched returns 0 otherwise non-zero value.
  char s2[6]="rahul";
  char s3[8]="rahul";
  cout<<strcmp(s2,s3); 
  string str="welcome";
  



  return 0;
}