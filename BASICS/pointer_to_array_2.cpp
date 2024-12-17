#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main() {
    int *p;
    // p=new int[5]; //C++ Syntax
    p=(int *)malloc(5*sizeof(int)); //at heap memory
    p[0]=10;
    p[1]=1;
    p[2]=11;
    p[3]=12;
    p[4]=13;
    for(int i=0;i<5;i++) {
        cout<<p[i]<<endl;
    }
    // delete[] p; //C++
    // free(p); //C
    return 0;
}