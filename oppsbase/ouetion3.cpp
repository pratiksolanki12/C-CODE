#include<iostream>
using namespace std;

class parentClass {
public:
    int a = 10;
    int b = 10;
};

class childClass : public parentClass {
public:
    int c;
    childClass() {
        c = a + b;
    }

    void display() {
        cout  << c << endl;
    }
};

int main() {
    childClass myobj;
    myobj.display();
    return 0;
}
