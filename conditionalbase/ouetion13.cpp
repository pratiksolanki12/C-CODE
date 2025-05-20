// Write a Program to make a simple calculator.

#include<iostream>
using namespace std;

int main(){
    
    int a,b;
    a=2;
    b=1;
    int handle;
    cout<< "Enter operation ";
    cin >> handle;
    switch (handle) {
        case 1:
            cout << "Result: " << a + b << endl;
            break;
        case 2:
            cout << "Result: " << a - b << endl;
            break;
        case 3:
            cout << "Result: " << a * b << endl;
            break;
            
    }
    
    }