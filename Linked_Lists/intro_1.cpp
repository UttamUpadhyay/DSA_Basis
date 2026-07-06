#include <iostream>
using namespace std;                                                                                          
                                                                                                               
//Creation of Node using OPPs
class Node {
    public : 
    int data;
    Node * next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};
 
class Linkedlist {
    
    Node * head = nullptr;
    int size = 0;
    // int size;
    // Linked List Operation :- 
    // --------------------------------------------------------------------------------------------
    // 1. push_front :-
            // TO ADD 1st_ Node (Case_1) 
        // step_1 : Create a new node 
        // step_2 : point head to the new node  && new node next  point null by defult
           // TO ADD 2 and more Node (Case_2)
        // step_1 : same to create new node
        // step_2 : new node next point head 
        // step_3 : head point new node
    public :
    void push_front(int val) {    //Time Complexity : O(1)  && Space Complexity : O(1)
        Node * node_1 = new Node(val);

        // Node newNode(val);     ----create new node by static way (delete after execution of the task)
        if (head == nullptr) { //To check if the linked list is empty or not(case_1)
            head = node_1;
        }
        else { //if linked list is not empty (Case_2)
            node_1 -> next = head;   
            head = node_1;
        }
        size++;
    }
    // -------------------------------------------------------------------------------
    // 2. push_back
    void push_back(int val) {  //Time Complexity : O(n)  && Space Complexity : O(1)
        Node * node_2 = new Node(val);
        Node * temp = head;
        if (head == nullptr) {
            head = node_2;
        } 
        else {
        while (temp -> next != nullptr) {
            temp = temp -> next;
        }
        temp -> next = node_2;
    } size ++;
    }
    // --------------------------------------------------------------------------------
    // 3. pop_front
    void pop_front() {  //Time Complexity : O(1)  && Space Complexity : O(1)
        Node * temp = head;
        head = head -> next;
        // temp -> next = nullptr;    
        delete(temp);
        // we can also check whether the linkedlist is empty or not, in case of empty we can return anything
       
        size--;
    }
    // --------------------------------------------------------------------------------------
    // 4. pop_back;
    void pop_back() {  //Time Complexity : O(n)  && Space Complexity : O(1)
        if (head == nullptr) {
            cout << "Linkedlist is empty!!" << endl;
            return;
        }
        Node * temp = head;
        while (temp != nullptr) {
            if (temp -> next -> next == nullptr) {
                temp -> next = nullptr;
                delete(temp -> next);
                size--;
            }
            temp = temp -> next;
        }
        
    }

    //--------------------------------------------------------------------------------------
    //5. insert node in middle of LL

    //Time Complexity : O(n)  && Space Complexity : O(1)
    void insert(int val, int pos) {  // position greater than 0
        if (pos == 0) {
            push_front(val);
            return;
        }
        Node * node_3 = new Node(val);  //step 1 : To create new node
        Node * temp = head;
        for (int i = 0; i < pos - 1; i++) {
            temp = temp -> next;
        }
        node_3 -> next = temp -> next;  // point new node to temp next to save linkedlists address
        temp -> next = node_3;         // then point temp to new node 
        
        size++;
    } 
    // --------------------------------------------------------------------------------------
    // 6. To search a node in LL
    void search(int key) {  //Time Complexity : O(n)  && Space Complexity : O(1)
        Node * temp = head;
        bool find = false;
        while (temp != nullptr) {
            if (temp -> data == key) {
                find = true;
            }
            temp = temp -> next;
        }
        if (find == true) {
            cout << "Elements found!!" << endl;
        }
        else {
            cout << "Elements Not found!!" << endl;
        }


    }

    //TO PRINT LINKEDLIST
    void display() {
        Node * temp = head;
        while (temp != nullptr) {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl << "Size of linkedlist : " << size;
    }
};

int main() {
    Linkedlist l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.push_front(4); 


    l1.push_back(5);
    l1.push_back(6); //Output : 4 3 2 1 5 6 
                     //   Size of linkedlist : 6
    
    l1.pop_front(); 
    l1.pop_back();

    l1.insert(4,2);

    l1.search(4);
    l1.search(8);
    

    l1.display();
}