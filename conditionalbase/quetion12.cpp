// Write a Program to find the largest number among three numbers.

#include<iostream>
using namespace std;

int main (){
    int a,b,c;
    a=12;
    b=23;
    c==11;
    
    if( a<b && c<b){
        cout<< " b is largest number";
    } else if( b<a && c<a){
        cout<< " a is largest number";
    }else if ( a<c && b<c){
        cout<< " c is largest number";
    }else{
        cout << " enter valid number";
    }
}