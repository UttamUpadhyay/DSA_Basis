#include<bits/stdc++.h>
#include <iostream>
using namespace std;

struct node {
    int data;
    struct node* next;
    struct node* prev;
};
node *Left, *Right;
node *GetNode()
{
    node *p; 
    p = new node;
    p->next = NULL;
    p->prev = NULL;
    return p;
}
// *********************************************************************
void Display()
{
    node *p = Left;
    while (p != NULL)
    {
        cout << p -> data << " "; 
        p = p -> next;
    }
    cout << endl;
}
// ******************************************************************

int Deltleft()
{
    node * p = Left;
    Left = Left-> next;
    if (Left != NULL) 
    {
        Left -> prev = NULL;
    }
    else {
        Right = NULL;
    }
    int x = p->data;
    free(p);
    return x;

}
// ******************************************************************

int DeltRight()
{
    node * p = Right;
    Right = Right -> prev;
    if (Right != NULL) 
    {
       Right -> next = NULL;
    }
    else {
       Left = NULL;
    }
    int x = p->data;
    free(p);
    return x;

}
// ******************************************************************
void InsertLeft(int x)
{
    node * p;
    p = GetNode();
    p->data = x;
    p->next = Left;
    
    if (Left != NULL)
    {
        Left->prev = p;
    }
    else {
        Right = p;
    }
    Left = p;
}

// ***********************************************************

void InsertRight(int x)
{
    node * p;
    p = GetNode();
    p->data = x;
    p->prev = Right;
    
    if (Right != NULL)
    {
        Right->next = p;
    }
    else {
        Left = p;
    }
    Right = p;
}
int main() 
{
    // node * PQ = NULL;
    Left = NULL;
    Right = NULL;
    InsertLeft(10);
    InsertLeft(20);
    InsertLeft(30);
    InsertLeft(40);
    //    Display();
 // InsertLeft(50);
        InsertRight(60);
        InsertRight(70);
    Display();
    Deltleft();
    Display();
    DeltRight();
    Display();
    
   
    
    

}