#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Rectangle {
    int length, breadth;
};
int main() {
    struct Rectangle r={10,5};
    // Rectangle r={10,5}; //We can skip struct in C++
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;

    Rectangle *p=&r;
    cout<<p->length<<endl; //use arrow operator for pointer variable
    cout<<p->breadth<<endl;
    return 0;
}