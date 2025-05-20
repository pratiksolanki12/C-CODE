// create an array( array = { 2 ,3 , 5, 6, 7}) and add 8,9,10 in array.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> array = {2, 3, 5, 6, 7}; 

    array.push_back(8);
    array.push_back(9);
    array.push_back(10);

    for(int num : array) {
        cout << num << " ";
    }

    return 0;
}
