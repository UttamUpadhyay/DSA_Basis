// -------------------------------List in C++ STL---------------------------------------ñ
// List: Store the elements in the form of a list(~~~~follow double linked list).
// Syntax: list<type>name_of_list;
// Operation perform on list:- 1.push_back(element); 2.push_front(element); 3.pop_back(); 4.pop_front(); 5.front(); 6.back(); 7.size(); 8.empty(); 9.clear(); 10.insert(position,element); 11.erase(position); 12.remove(element); 13.sort(); 14.reverse(); 15.merge(list2); 16.unique(); 17.swap(list2); 18.resize(size); 19.max_size(); 20.assign(size,element);

#include<bits/stdc++.h>
// #include<list>
using namespace std;
int main(){
    list<int>l1;
    l1.push_front(10);
    l1.push_front(20);
    l1.push_front(30);
    l1.push_back(50);
    l1.push_back(60);
    // l1.pop_back();
    // l1.pop_front();

    // cout<<l1.front()<<" "<<l1.back()<<endl;
    cout<<l1.size()<<" "<<endl;

    //to iterate the list
    for(auto i= l1.begin();i!=l1.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    //to iterate the list in reverse order
        for(auto it=l1.rbegin();it!=l1.rend();it++){
        cout<<*it<<" ";
    }
  
}