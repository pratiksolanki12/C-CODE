
#include<iostream>
using namespace std;


int myFunction(int num1, int num2);

int main() {
    int num1, num2;

    cout << "Enter both numbers: ";
    cin >> num1 >> num2;

    int result = myFunction(num1, num2);
    cout<< result << endl;

    return 0;
}

int myFunction(int num1, int num2) {
    int c = num1 + num2;
    return c;
}