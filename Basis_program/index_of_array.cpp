#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int a[5] = {10,20,30,40,50};
    int position, found = 0;
    int num;
    cin >> num;
    for (int i = 0; i < 5; i++)
    {
        cout << " " << a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == num)
        {
            found = 1;
            position = i;
            break;

        }
    }
    if (found == 1)
    {
        cout << endl << num << " " << position;
    }

    else
    {
        cout << "Number not found" << num;
    }
    return 0;

}