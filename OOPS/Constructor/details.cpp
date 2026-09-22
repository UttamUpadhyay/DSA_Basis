#include <iostream>
using namespace std; 

class student {
    int roll;
    string name;
    static int count;
public:
    student(int , string );
    void display();
    static void show();
};

student :: student(int r, string n) {
    roll = r;
    name = n;
    count++;
}
void student :: display() {
    cout << roll <<" " <<  name << endl;
}
int student :: count;
void student :: show(){
    cout << count;
}

int main() {
    student S1(2, "ram");
    S1.display();
    student S2 = student(5, "Jai");
    S2.display();
    student :: show();
}