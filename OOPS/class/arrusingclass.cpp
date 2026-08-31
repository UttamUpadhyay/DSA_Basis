#include<iostream>
// #include<vector>
using namespace std;
#define size 5
class Student{
    int marks;
    // int size;
    int arr[size];
    int total;
    public:
    
    void getmarks(int []);
    
    // string getgrade(int);
    
};

void Student :: getmarks(int val[]){
    int sum = 0;
    cout << "Enter the marks of " << size << " - : ";
    for (int i = 0; i < size; i++) {
        cin >> val[i];
        sum += val[i];
        
    }
    cout << "Sum of the marks :- " << sum << endl;
    string grade;
    if (sum >= 95){
        grade = "A+";
    }
    else if (sum >= 90 && sum < 95) {
        grade = "A";
    }
    else if (sum >= 80 && sum < 90){
        grade = 'B';
    }
    else if (sum >= 75 && sum < 80) {
        grade = "C";
    }
    else if (sum >= 55 && sum < 75) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }
    cout << "Grade - " << grade << endl;
}




int main()
{
    Student S1;
    int arr[size];
    S1.getmarks(arr);
    // S1.getgrade(95);


}