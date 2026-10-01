#include <iostream>
using namespace std; 

#include "demo.h"

Demo::Demo() {
    cout << "Constructor Called\n";
}
Demo:: ~Demo() {
    cout << "Destructor called\n";
}


int main() {
    Demo D;
}