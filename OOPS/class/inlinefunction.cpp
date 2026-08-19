#include <iostream>
using namespace std;
//namespace to defined the scope of variable

class Srtudent{
    int rollno;
    string name;
    public:
    void getdata(int , string );
    void display();
};
void Student :: getdata(int r, string n)
{
    rollno = r;
    name = n;
}
inline void Student :: display() 
{
    cout << rollno << " ";
    cout << name << endl;
}

int main() 
{
    int r1;
    string s1;
    cin >> r1 >> s1;
    Student S[2];
    for (int i = 0; i < 2; i++) {
        S[i].getdata(r1,s1);
    }

}