#include <iostream>
using namespace std;
class Test; // forward declaration of class
class Example{
    int a;
    public :
    void getdata();
    int sum(Test , Example);
};
class Test{
    int b;
    public:
    void getdata();
    int sum(Test , Example);
    int getvalue();
};

int Test :: getvalue()
 {
    return b;
 }
void Example :: getdata() 
{
    cout << "Enter the class Example var -: ";
    cin >> a;
}
void Test :: getdata() 
{
    cout << "Enter the class Test var -: ";
    cin >> b;
}
int Example :: sum (Test A, Example B){
   int ans = A.getvalue() + B.a;
   return ans;
}


int main() 
{
    Example E1;
    Test T1;
    E1.getdata();
    T1.getdata();
    cout << E1.sum (T1, E1);

}