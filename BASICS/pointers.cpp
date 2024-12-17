#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
    int a=10;
    int *p;
    p=&a;
    cout<<a<<endl; //prints 10
    printf("Using pointer %d\n", *p);
    printf("Using pointer %d\n", p);
    printf("Using pointer %d\n", &a);
    return 0;

}