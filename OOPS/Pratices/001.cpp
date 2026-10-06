#include <iostream>
using namespace std;

class Teacher{
    string name;
    int salary, emply_id;
    static int count;
    public:
    void getdata(string, int, int);
    void check(Teacher);
    static void countdata();
};

int Teacher :: count = 0;

void Teacher:: getdata(string n, int x, int y){
    name = n;
    emply_id = x;
    salary = y;
    count++;
}
void Teacher :: countdata() {
    cout << "Total faculty : " <<  count << endl;
}
void Teacher :: check(Teacher T) {
    if (T.salary > 50000) {
        cout << "Rich\n";
    }
    else {
        cout << "Poor\n";
    }
}
int main() {
    Teacher T1, T2;
    T1.getdata("Rahul", 12 , 4500);
    T2.getdata("Umang", 14, 5000000);
    T1.check(T1);
    T2.check(T2);
    Teacher::countdata();
}
