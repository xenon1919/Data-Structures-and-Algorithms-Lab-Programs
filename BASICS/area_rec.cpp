#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
    int length=0;
    int breadth=0;
    printf("Enter length and breadth\n");
    cin>>length>>breadth;
    int area=length*breadth;
    int peri=2*(length+breadth);
    printf("Area=%d\nPerimeter=%d\n",area,peri);
    return 0;
}