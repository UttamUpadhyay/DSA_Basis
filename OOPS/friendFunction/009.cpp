#include <iostream>
using namespace std; 

class Startup{
    string name;
    int amount;
    public:
    void getdata(string, int);
    friend Startup TotalAmt(Startup, Startup, Startup);
    void display(Startup);
    
};

void Startup :: getdata(string n, int amt) {
    name = n;
    amount = amt;
}
Startup TotalAmt(Startup A, Startup B, Startup C) {
    Startup D;
    D.amount = A.amount + B. amount + C.amount;
    return D;
}
void Startup :: display( Startup S) {
    cout << "Total Amount : " << S.amount << endl;
    if (S.amount > 100000){
        cout << "Eligible" << endl;
    }
    else {
        cout << "Not Eligible " << endl;
    }
}

int main() {
    Startup A, B, C, D;
    A.getdata("Ram" , 21000);
    B.getdata("Shaym" , 32000);
    C.getdata("Amit" , 43200);
    D = TotalAmt(A, B, C);
    D.display(D);
}


