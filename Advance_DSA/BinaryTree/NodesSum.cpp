#include <iostream>
#include<algorithm>
using namespace std;


struct node {
    int data;
   struct node *left;
  struct  node *right; 

  
};
node * Makenode (int val){
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

// bool IsComplete(node * T) {
//     int N = CountNodes(T);
//     int h = Height(T);
//     int x = pow(2, h + 1);
//     if (N == x - 1) {
//         return true;
//     }
//     else {
//         return false;
//     }
// }
int Sum(node * T) {
    if (T == NULL) {
        return 0;
    }
    return T -> data + Sum(T -> left) + Sum(T -> right);
}

void CreateNode(node * T) {
    int choice;
    cout << "Whether the Left side of " << T -> data << " is exist ? (0 / 1) ";
    cin >> choice; 
    if (choice == 1) {
        int x;
        cout << "Enter the data of the left node : ";
        cin >> x;
        node * p = Makenode(x);
        T -> left = p;
        CreateNode(p);
    } 
    cout << "Whether the Right side of " << T -> data << " is exist ? (0 / 1) ";
    cin >> choice; 
    if (choice == 1) {
        int x;
        cout << "Enter the data of the Right node : ";
        cin >> x;
        node * p = Makenode(x);
        T -> right = p;
        CreateNode(p);
    } 

}

int main() {
    int x;
    cin >> x;
    node * root = Makenode(x);
    CreateNode(root);
    cout << "The nodes in Binary tree is : " << CountNodes(root);
    cout << "\nThe leaf nodes in Binary tree is : " << CountLeaf(root);
    cout << "\nThe number of N2 node in Binary tree is : " << CountN2(root);
    cout << "\nThe number of N1 node in Binary tree is : " << CountN1(root);
    cout << "\nBinary tree is strictly binary or not : " << IsStrictly(root);
    cout << "\nThe height of the binary tree is : " << Height(root);
    // cout << "\nIs binary Tree complete or not " << IsComplete(root);
    cout << "\nThe sum of the nodes in binary tree is : " << Sum(root);
}
