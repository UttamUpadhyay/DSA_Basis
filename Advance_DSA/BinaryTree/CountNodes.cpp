#include <iostream>
using namespace std;


struct node {
    char data;
   struct node *left;
  struct  node *right; 

  
};
node * Makenode (char val){
    node * p;
     p = new node;
     p->data = val;
     p -> left = NULL;
     p -> right = NULL;
    return p;
}



int Count(node * T) {
    int count = 0;
    if (T != NULL) {
        count++;
        Count(T -> left);
        Count(T-> right);
    }
    return count;
}

//To count Nodesss

int CountNodes(node * T) {
    if (T == NULL) {
        return 0;
    }
    else {
        return 1 + CountNodes(T-> left) + CountNodes(T -> right);
    }
}

//To count leaf nodes
int CountLeaf(node * T) {
    if (T == NULL) {
        return 0;
    }
    if (T -> left == NULL && T-> right == NULL) {
        return 1;
    }
    return CountLeaf(T-> left) + CountLeaf(T-> right);
}
//To count N2
int CountN2(node * T){
    if (T == NULL) {
        return 0;
    }
    if (T-> left == NULL && T -> right == NULL) {
        return 0;
    }
    if (T-> left != NULL && T-> right != NULL) {
        return 1 + CountN2(T->left) + CountN2(T -> right);
    }
    return CountN2(T->left) + CountN2(T->right);
}

//To count N1
int CountN1(node * T){
    if (T == NULL) {
        return 0;
    }
    if (T-> left == NULL && T -> right == NULL) {
        return 0;
    }
    if (T-> left != NULL && T-> right != NULL) {
        return CountN1(T->left) + CountN1(T -> right);
    }
    return  1 + CountN1(T->left) + CountN1(T->right);
}
//Strictly Binary Tree
bool IsStrictly(node * T) {
    int C = CountN1(T);
    if (C == 0) {
        return true;
    }
    else {
        return false;
    }
}
//Height of Binary Tree
int Height(node * T) {
    if (T== NULL) {
        return 0;
    }
    if (T -> left == NULL && T->right == NULL) {
        return 0;
    }
    int Lh = Height(T->left);
    int Rh = Height(T->right);
    return 1 + max(Lh,Rh);
}

int main() {
    node * root = NULL;
    root = Makenode('A');
    root -> left = Makenode('B');
    root -> left -> left = Makenode('F');
    root -> right = Makenode('C');
    root -> right -> right = Makenode('E');
    root -> right -> left = Makenode('D');
    root -> right -> left -> left = Makenode('H');
    root ->right ->left -> right = Makenode('I');
    cout << "The nodes in Binary tree is : " << CountNodes(root);
    cout << "\nThe leaf nodes in Binary tree is : " << CountLeaf(root);
    cout << "\nThe number of N2 node in Binary tree is : " << CountN2(root);
    cout << "\nThe number of N1 node in Binary tree is : " << CountN1(root);
    cout << "\nBinary tree is strictly binary or not : " << IsStrictly(root);
    cout << "\nThe height of the binary tree is : " << Height(root);
   
}
