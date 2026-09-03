#include <iostream>
using namespace std;

class BankAccount{
    int initalAmt;
    int depositAmt;
    int totalSum;
    public:
    void getdata(int, int);
    void total();
    static int  totalObj( BankAccount, BankAccount);
};

void BankAccount :: getdata(int x, int y){
    initalAmt = x;
    depositAmt = y;
}
void BankAccount :: total() {
    cout << "Total Amount in one Object - " ;
    cout << initalAmt + depositAmt << endl;
}
int BankAccount :: totalObj(BankAccount x, BankAccount y) {
int ans = x.initalAmt + x.depositAmt + y.initalAmt + y.depositAmt;
return ans;
}

int main() {
    BankAccount A, B;
    A.getdata(1000, 5000);
    B.getdata(1000, 10000);
    A.total();
    B.total();
    cout << "Total Amount in Bank " << BankAccount :: totalObj(A, B);
}