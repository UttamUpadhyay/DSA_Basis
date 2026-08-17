#include <iostream>
using namespace std;

class Area {
    private:
    float r;
    public:
    void getradius(float);
    float area();
};
void Area :: getradius(float a) {
    r = a;
}
float Area :: area(){
float ans = 3.14 * r * r;
return ans;
}

int main() {
    float x;
    cout << "Enter the radius -: " ;
    cin >> x;
    Area A1;
    A1.getradius(x);
    float result = A1.area();
    cout << "Area of the circle -: " << result;
}
