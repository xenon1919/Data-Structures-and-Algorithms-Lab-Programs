#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Rectangle {
    int length, breadth;
};
int main() {

    Rectangle *p;
    // p=new Rectangle; //In C++
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length=15;
    p->breadth=20;
    cout<<p->length<<endl; 
    cout<<p->breadth<<endl;
    return 0;
}