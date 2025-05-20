#include<iostream>
using namespace std;

int main(){
    
    int a=1;
    int b=2;
    
    int c= a+b;
     b=c-b;
     a=c-a;
    
    cout << " a is:"<< a<< endl;
    cout<< " b is:"<< b<< endl;
    
}