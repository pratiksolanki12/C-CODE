// create metrix  123 
//                456
//                789
                  

#include<iostream>
using namespace std;

int main() {
    int value = 1;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << value;
            value++;
        }
        cout << endl;
    }

    return 0;
}

