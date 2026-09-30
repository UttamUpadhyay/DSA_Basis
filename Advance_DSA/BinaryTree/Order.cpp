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



void PreOrder(node * T) {
    if (T != NULL) {
        cout << T -> data << " ";
        PreOrder(T -> left);
        PreOrder(T-> right);
    }
}

void InOrder(node * T) {
    if (T != NULL) {
        
        InOrder(T -> left);
        cout << T -> data << " ";
        InOrder(T-> right);
    }
}

void PostOrder(node * T) {
    if (T != NULL) {
        PostOrder(T -> left);
        PostOrder(T-> right);
        cout << T -> data << " ";
    }
    
}

int main() {
    node * root = NULL;
    root = Makenode('A');
    root -> left = Makenode('B');
    root -> left -> left = Makenode('F');
    root -> right = Makenode('C');
    root -> right -> right = Makenode('E');
    root -> right -> left = Makenode('D');
    cout << "Post order => " ;
    PostOrder(root);
    cout << endl <<  "Pre order => ";
    PreOrder(root);
    cout << endl << "In Order => ";
    InOrder(root);
}
