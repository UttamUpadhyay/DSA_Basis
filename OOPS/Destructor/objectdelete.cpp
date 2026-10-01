#include <iostream>
using namespace std; 

class Example{
    static int count;
    public : 
    Example ();
    void display();
    ~Example();
};
int Example :: count = 0;
Example :: Example () {
   count++;
   cout << "\nThe number of Objects created: " << count;
}
Example :: ~Example () {
    cout << "\nThe number of objects deleted: " << count;
    count--;
}

int main() {
    Example E1, E2, E3;
}