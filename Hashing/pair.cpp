-------------------------Pair in C++ STL---------------------------------
// Pair: Store the two elements in the set as a pair of eleements.
// Syntax: pair<type1,type2>name_of_pair;
// Store elements in pair by :- 1. p=make_pair(element1,element2);
//                              2. p.first=element1; p.second=element2;

#include<iostream>
#include<bits/stdc++.h>
// #include<pair>
using namespace std;


int main(){
    
    pair<string,int>P1;
    pair<string,int>P2;

    // Two method insert
    // 1.
    P1=make_pair("Uttam",40);

    // cout<<P1.first<<" "<<P1.second<<endl;

    // 2.
    P2.first="Harsh";
    P2.second=45;
    // cout<<P2.first<<" "<<P2.second<<endl;

    // if we want to make pair of 3-element like name,age,weight.Consider name as a pair first and age, weight as a pair second  then

    pair<string,pair<int,int>>New_P;
    // New_P.first="Arpan";
    // New_P.second.first=20;
    // New_P.second.second=74;

    //by make_pair(second method)
    New_P=make_pair("Ritesh",make_pair(19,55));
    cout<<New_P.first<<" "<<New_P.second.first<<" "<<New_P.second.second<<endl;
    
    return 0;
}