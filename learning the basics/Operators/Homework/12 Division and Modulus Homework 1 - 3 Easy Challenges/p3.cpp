#include<iostream>
using namespace std;

int main () {
    double a, b;
    
    cin >> a >> b;
    double c = a / b;


    cout<< (c - (int)c) * b<<"\n"; 


    return 0;
}