#include <iostream>
#include <vector>
using namespace std;

struct node{
    int data;
    struct node *next;
};

node *GetNode()
{
    node * p;
    p =(node *) malloc(sizeof(struct node));
    return p;
}